/* 
 * Chapter 5, question 3
 * 
 * Write a program that uses an if-else statement to determine 
 * whether a digit typed by the user is odd or even and 
 * prints a message to tell the user which it was. 
 * If the typed input is not a digit, the program should do nothing. 
 */

#include <stdio.h> 

int main () {
    int key; 

    printf("Type a digit: \n");
    key = getch();
    if (key % 2 == 1) {
        /* it is odd */ 
        printf("You typed %c\n", key);
        puts("You typed an odd number");
    }
    else {
        /* it is even */ 
        printf("You typed %c\n", key);
        puts("You typed an even number");
    }
}