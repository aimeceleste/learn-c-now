/* 
 * Write a function ClearScreen() that clears the screen by emitting a series of newline 
 * characters, the number of which is determined by an integer parameter, n. Write a main()
 * function that calls ClearScreen() with the number of lines needed to clear your screen.
 * You will need at least 25 newlines, more on large-screen systems.
 */

#include <stdio.h>

/* 
 * Function prototypes
 */ 
void ClearScreen();

int main(void) {
    int n = 0; 
    for (n = 0; n <= 25 ; n++) {
        ClearScreen();
    }
}

/* 
 * Clear the screen by printing newlines
 */ 
void ClearScreen() {
    printf("\n");
}