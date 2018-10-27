/* 
 * C M D 2 
 * 
 * Get acommand from the user and take the requested action. 
 * This version demonstrates the use of the switch staetment. 
 */

#include <stdio.h>

int main ()  {
    int key; 

    /* 
     * Get a command from the user. A command is a 
     * single key which is acted upon immediately. 
     */
    printf("Command (? for help): ");
    key = getch();
    switch (key) {
    case 'q':    
    case 'Q': 
        puts("Done.");
        break;
    case 'h': 
    case 'H': 
    case '?': 
        puts("CMD2 understands these commands:");
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
    return (0);     
}
