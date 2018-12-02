/* 
 * S W A P 
 * 
 * Exchange values in storage by using "call-by-value" and 
 * "call-by-refernce" parameter-passing methods to show 
 * the fundamental differences between the methods. 
 */
#include <stdio.h>

int main(void) {
    int val1, val2;   /* integer values */

    /* 
     * Function prototypes.
     */ 
    void SwapByValue(int, int);          /* uses variables */
    void SwapByReference(int *, int *);  /* uses pointers */

    /* 
     * Initialize variables.
     */
    val1 = 10; 
    val2 = 20; 
    puts("Parameter-passing test\n");
    printf("Starting values:\n\tval1 = %d; val2 = %d\n", val1, val2);

    /* 
     * Pass parameters by value.
     */
    puts("After call-by-value attempt:");
    SwapByValue(val1, val2); 
    printf("\tval1 = %d; val2 = %d\n", val1, val2);

    /* 
     * Pass parameters by reference.
     */
    puts("After call-by-reference attempt:");
    SwapByReference(&val1, &val2);
    printf("\tval1 = %d; val2 = %d\n", val1, val2);

    return 0; 
}

/* 
 * SwapByValue()
 * 
 * Attempt to swap two variables in memory by using
 * call-by-value parameter passing.
 */

void SwapByValue(int v1, int v2) {
    int tmp;  

    /* 
     * Swap the values of v1 and v2. Because v1 and v2 
     * are copies of the actual arguments, the variables 
     * in main() are unaffeected by this action. 
     */
    tmp = v1; 
    v1 = v2; 
    v2 = tmp;
}

/* 
 * SwapByReference()
 * 
 * Attempt to swap two variables in memory by using 
 * call-by-reference parameter passing. 
 */

void SwapByReference(int *vp1, int *vp2) {
    int tmp; 

    /* 
     * Swap the values in the variables pointed to by 
     * vp1 and vp2. Because vp1 and vp2 are addresses of
     * the actual arguments, the values in main() are 
     * changed by this action.
     */
    tmp = *vp1;
    *vp1 = *vp2;
    *vp2 = tmp;
}
