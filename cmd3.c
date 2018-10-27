/* 
 * C M D 3
 * Get a command from the user and take the reqested action.
 * This version demonstrates the use of an infinite loop. 
 */

#include <stdio.h> 

int main () {
    int key; 

    /* 
     * Loop until the user types the command to quit. 
     */
    printf("Press ? for help.\n");
    while (1) {
        /* 
         * Get a command from the user. 
         */ 
        printf("Command: ");
        key = getch(); /* console input */

        /* 
         * Analyze and act on the command
         */
        switch(key) {
            case 'q': 
            case 'Q': 
                puts("Done.");
                return(0);
            case 'h': 
            case 'H': 
            case '?': 
                puts("CMD3 understands these commands: ");
                puts("h or H or ?: help frame");
                puts("m or M: message");
                puts("q or Q: quit");
                break;
            case 'm': 
            case 'M': 
                puts("Here's the message.");
                puts("Pretty disappointing, huh!");
                break; 
            default: 
                printf("Unknown command -- %c\n", key); 
                break;
        }
    }
}