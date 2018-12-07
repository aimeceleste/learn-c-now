/* 
 * U N I O N _ 1 
 * 
 * Use aunion to access the same area of memory
 * as either an integer or float at different times. 
 */

#include <stdio.h>

/* 
 * Declare the union date type.
 */
union my_union {
    float float_num;
    int int_num; 
};

int main(void) {
    /* 
     * Declare a variable union_mem to use for 
     * accessing members of the union.
     */
    union my_union union_mem;

    /* 
     * Save an integer in my_union and print it out.
     */
    union_mem.int_num = 29; 
    printf("Current value of my_union: %d\n", union_mem.int_num);

    /* 
     * Now save a float in my_union and print it out.
     */
    union_mem.float_num = 19.58; 
    printf("Current value of my_union: %.2f\n", union_mem.float_num);

    return(0); 
}