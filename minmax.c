/* 
 * M I N M A X 
 * 
 * Demonstrate the use of a static array. The 
 * program checks a set of numbers and reports
 * the minimum and maximum values found.
 */

#include <stdio.h>
#define MIN(a,b)  (((a) < (b)) ? (a) : (b))
#define MAX(a,b)  (((a) > (b)) ? (a) : (b))
#define NVALUES 20

int main(void) {
    int i;
    int minval, maxval;
    static int value[] = {
        20, 11, 13, 19, 55, 99, 87, 30, 62, 15, 
        36, 76, 18, 94, 86, 22, 7, 12, 88, 47
    };

    /* 
     * Find the minium and maximum values in the list.
     */
    minval = maxval = value[0];
    for (i = 1; i < NVALUES; ++i) {
        minval = MIN(minval, value[i]);
        maxval = MAX(maxval, value[i]);
    } 

    /* 
     * Report the results.
     */
    printf("Minimum value = %d; Maximum value = %d\n", minval, maxval);

    return(0); 
}