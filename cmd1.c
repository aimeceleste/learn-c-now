/* 
 * C M D 1 
 * 
 * Get a command from the user and take the requested action. 
 */

#include <stdio.h>
#include <conio.h>

int main() {
    int key;

    /* 
     * Get a command from the user. A command is a
     * single key which is acted upon immediately. 
     */
    printf("Command: ");
    key = getch(); // Console input
    if (key == 'q' || key == 'Q')  
        puts("Done.");
    else if (key == 'h' || key == 'H' || key == '?')  {
            puts("CMD1 understands these commands:");
            puts("h or H or ?: help frame");
            puts("m or M: message");
            puts("q or Q: quit");
    }
    else if (key == 'm' || key == 'M')  {
            puts("Here's the message.");
            puts("Pretty disappointing, huh!");
    }
    else printf("Unknown command --%c\n", key);

    return (0);

}