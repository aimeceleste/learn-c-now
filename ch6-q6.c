/* 
 * Write a macro that yields the minimum value from a set of three input 
 * values, MIN3(x, y, z). (Hint: Conditional expressions can be nested.)
 */

#include <stdio.h>
#define MIN3(x, y, z) ( ( (x) < (y) ? (x) : (y) ) < (z) ? ( (x) < (y) ? (x) : (y) ) : (z) ) 

int main() {
    int n, x, y, z = 0;
    
    printf("Enter a number: \n");
    scanf("%d", &x);
    printf("Enter another number: \n");
    scanf("%d", &y);
    printf("Enter a final number: \n");
    scanf("%d", &z);

    n = MIN3(x, y, z);
    printf("The minimum of the three numbers you typed is: %d", n);

}