/* 
 * Chapter 5, question 4
 * 
 * Write a program that reads input from the keyboard and counts the number of 
 * letters (A-Z and a-z), digits (0-9), and other characters. Use an if statement 
 * with multiple else clauses to differentiate the input characters. 
 */ 

#include <stdio.h> 

int main () {
    int key; 
    int number, upper, lower;
    number = 0;
    upper = 0; 
    lower = 0;
    puts("Please start typing.");
    while (1) {
        key = getch(); 
        /* could use scanf instead of getch, but then the if-else would need to be rewritten */ 
        if (key == 32) {
            break;
        } else if (key >= 48 && key <= 57) {
            /* numbers are ASCII characters 48-57 */ 
            number++; 
        } else if (key >= 65 && key <= 90) {
            /* capital letters are ASCII characters 65-90 */
            upper++;
        } else if (key >= 97 && key <= 122) {
            /* lowercase letters are ASCII characters 97-122 */
            lower++;
        }
    }
    printf("You typed %d numbers, %d capital letters, and %d lowercase letters.", number, upper, lower);
}