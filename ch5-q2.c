/* 
 * Chapter 5, question 2
 * 
 * Write a simple if statement that prints what the user types 
 * if it is a lowercase letter and does nothing for any other input.
 */

#include <stdio.h> 

int main() {
    int key; 

    /* if the user types an ASCII character, this is read as a number - implicit casting*/
    printf("Type a character: \n");
    key = getch(); /* console input */
    /* if that char's int value is between 97 and 122, it is a lowercase ASCII character */ 
    if (key > 96 && key <= 122) {
        printf("You typed the ASCII character %d", key);
    }
    return (0);
}
