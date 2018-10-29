/* 
 * Chapter 5, question 5
 * 
 * Use a conditional expression instead of an if-else statement 
 * to handle the odd/even test in Exercise 3.
 */

#include <stdio.h>

int main () {
    int key; 
    key = 0;
    printf("Type a digit: \n");
    /* consider using scanf instead of getch */
    key = getch();
    /* conditional: case 1? if 1 is true: false otherwise */
    key % 2 == 1 ? 
        printf("You typed an odd number. You typed ASCII character %d", key) : 
        printf("You typed an even number. You typed ASCII character %d", key);
}