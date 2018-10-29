/* 
 * Chapter 5, question 8
 * 
 * Rewrite the while loop in exercise 7 in the form of a for loop.
 */

#include <stdio.h> 

int main() {
    int n, result = 0; 
    for (n = 0; n <= 8; n++) 
        printf("Your result is %d\n", result = 1 << n);
    return (0); 
}