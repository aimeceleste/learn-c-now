/* 
 * Chapter 5, question 7
 * 
 * Write a program that prints all the powers of 2, starting with 0 and 
 * ending at 2 raised to the power of 8. Use a while loop to control the 
 * calculations and printing. 
 */

# include <stdio.h> 

int main() {
    int result, n = 0; /* table index */

    while (n < 9) {
        result = 1 << n;
        n++;
        printf("This is your result: %d\n", result);
    }
}