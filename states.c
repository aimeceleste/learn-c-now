/* 
 * S T A T E S 
 * 
 * Use an array of structured variables to keep 
 * vital information about the United States.
 */
 
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include "states.h"

 #define SCBUFSIZE 2    /* State code input buffer size */
int StateData(char *);

int main(void) {
    char statecode[SCBUFSIZE + 1];

    /* Ask the suer for a state code and display
     * the data, if any, or an error message. 
     */
    printf("State code (CO, MA, etc.): ");
    scanf("%2s", statecode);
    if (StateData(statecode)) {
        fprintf(stderr, "%s: State not found\n", statecode);
        exit (1);
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
