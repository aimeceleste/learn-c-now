/* 
 * Modify the STATES program so that you can give it commands
 * that ask for various kinds of output:
 * 
 * Command      Description of output
 * A            A columnar table of all data by state
 * C            A table of state capitals
 * P            A table of population data by state
 * S            Select state data by postal code
 * Q or Esc     Quit
 * 
 * (The S command is the current default of the STATES program.)
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "states.h"

#define SCBUFSIZE 2         /* State code input buffer size */
#define ESC_KEY   27        /* Escape key ASCII code */ 

int StateTable(void);       /* Returns a table of all data by state */
int CapTable(void);         /* Returns a table of state capitals */ 
int PopTable(void);         /* Returns a table of state population data */ 
int StateData(char *);      /* Returns state data when given a 2 letter postal code */

int main(void) {
    char statecode[SCBUFSIZE + 1];
    int ch = 0;
    printf("Enter a command (H or h for help): ");
    scanf("%1s", &ch);     
    switch (ch) {
        case 'a':
        case 'A':
            StateTable();
            break; 
        case 'c':
        case 'C':
            CapTable();
            break; 
        case 'h':
        case 'H':
            printf("=== Command      Description of output ===\n");
            printf("    A            A columnar table of all data by state\n");
            printf("    C            A table of state capitals\n");
            printf("    P            A table of population data by state\n");
            printf("    S            Select state data by postal code\n");
            printf("    Q or Esc     Quit\n");
            break;
        case 'p':
        case 'P':
            PopTable();
            break;
        case 'q':
        case 'Q':
        case ESC_KEY:     // scanf doesn't seem to allow an ESC key press 
            break;
        case 's':
        case 'S':
            /* 
            * When the user presses S: Ask the user for a state code and display
            * the corresponding data, if any, or an error message. 
            */
            printf("State code (CO, MA, etc.): ");
            scanf("%2s", statecode);
            if (StateData(statecode)) {
                fprintf(stderr, "%s: State not found\n", statecode);
                exit (1);
            }
            break;
    }
    return (0);
}
/* 
 * StateData()
 * 
 * Display the data for a state specified by the state 
 * abbreviation (postal code) supplied as an argument. 
 */
int StateData(char *code) {
    int rc = 0;       /* return code */
    int index;        /* array index */

    for (index = 0; index < NSTATES; ++index) {
        if (strcmp(strupr(code), States[index].code) == 0)
            break;
    }
    /* 
     * If the index reaches the number of states in the 
     * array, the code was not found. Report an error. 
     */
    if (index == NSTATES)
        return (++rc);

    /* 
     * Found a state record. Display the requested data.
     */
    printf("  State name: %s\n", States[index].name);
    printf("Capital city: %s\n", States[index].capital);
    printf("  Population: %u (thousands)\n", States[index].population);
    printf("   Land area: %lu sq.miles\n", States[index].area);

    return (0);       
}
/* 
 * StateTable()
 * 
 * Display the data for all states found in "states.h"
 */
int StateTable(void) {
    for (int index = 0; index < NSTATES; index++) {
        printf("  State name[%d]: %s\n", index, States[index].name);
        printf("Capital city[%d]: %s\n", index, States[index].capital);
        printf("  Population[%d]: %u (thousands)\n", index, States[index].population);
        printf("   Land area[%d]: %lu sq.miles\n", index, States[index].area);
    }
    return (0);
}
/* 
 * CapTable()
 * 
 * Display the capitals for all states found in "states.h"
 */
int CapTable(void) {
    for (int index = 0; index < NSTATES; index++) {
        printf("%s\'s capital city: %s\n", States[index].name, States[index].capital);
    }
    return (0);
}
/* 
 * PopTable()
 * 
 * Display the population for all states found in "states.h"
 */
int PopTable(void) {
    for (int index = 0; index < NSTATES; index++) {
        printf("%s population: %u (thousands)\n", States[index].name, States[index].population);
    }
    return (0);
}