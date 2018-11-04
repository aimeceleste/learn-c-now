/* 
 * P W R T B L 2
 * 
 * Print a table of powers
 */

#include "macros.h"
#include <stdio.h> 
#define MAXN 10

int main () {
    int n;
    /* 
     * Label the columns. 
     */
    puts("number\t exp2\t exp3\t exp4");
    puts("-----\t-----\t-----\t-----");
    /*
     * Print the table of power values. 
     */
    for (n = 0; n <= MAXN; ++n)
        printf("%2d\t%5d\t%5d\t%5d\n", n, SQR(n), CUBE(n), QUAD(n));
    return (0); 

}