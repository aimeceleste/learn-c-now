/* 
 * Chapter 5, question 6
 * 
 * Use a switch statement inside a loop to implement a simple menu selection program that has five commands. 
 * Execute a command by typing a number from 1 through 5. For testing purposes, each command can simply print its own number. 
 * Terminate processing when the user types any character other than 1 through 5.
 */ 

#include <stdio.h> 
#include <stdbool.h> 

int main () {
    int key; 
    bool control; 
    control = true; 
    /* Loop until the user types a key to quit */
    while (control) {
        printf("Type a command from 1 through 5, or type any other key to quit: \n");
        /* Consider using scanf instead of getch */ 
        key = getch(); 
        switch (key) {
            case '1':
                puts("You typed 1.");
                break; 
            case '2': 
                puts("You typed 2.");
                break;
            case '3':
                puts("You typed 3.");
                break;
            case '4': 
                puts("You typed 4.");
                break;
            case '5': 
                puts("You typed 5.");
                break;
            default: 
                printf("Unknown command -- %c\n", key); 
                control = !control; 
                break; 
        }
    }

}