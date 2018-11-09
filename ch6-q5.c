/* The absolute value of a signed number is that number with its sign 
 * information removed. (For example, the absolute value of -4 is 4.)
 * Write a macro, ABS(x) that yields the absolute value of x. Use the
 * conditional operator in the defintion and be sure to parenthetize 
 * the definition fully.
 */

#define ABS(x) ((x) > 0 ? (x) : -(x))
#include <stdio.h> 

int main () {
    int n = 0; 
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("You typed %d\n", n);
    printf("The absolute value of %d is: %d\n", n, ABS(n));

    return(0);
}
