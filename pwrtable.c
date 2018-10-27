/* 
 * 
 * P W R T A B L E 
 * Print a table of powers.
 */

#include <stdio.h>

int main () {
    int n; /* table index */

    /* 
     * Label the coumns. 
     */ 
    puts("number\t exp2\t exp3\t exp4");
    puts("------\t------\t------\t------");

    /* 
     * Print the table of power values. 
     */
    for (n = 0; n <= 10; ++n)
        printf("%2d\t%5d\t%5d\t%5d\n", n, n*n, n*n*n, n*n*n*n);
    return (0); 

}
