/* 
 * A D D _ P T R 
 * 
 * Demonstrate declaration and use of pointers.
 */
#include <stdio.h>

int main(void) {
    int number1, number2, sum; /* declare variable names */
    int *np1, *np2, *sp;       /* declare pointers */ 
    /* 
     * Load pointers with addresses of the declared variables.
     */
    np1 = &number1; 
    np2 = &number2; 
    sp = &sum; 

    /* 
     * Put values into memory locations pointed to by the pointers.
     */  
    *np1 = 5; 
    *np2 = 7;
    *sp = *np1 + *np2; 

    /* 
     * Print out the addresses of the variables and their contents.
     */
    printf("\nName\tAddress\tValue\n");
    printf("----\t-------\t-----\n");
    printf("%s\t%u\t%d\n", "number1", &number1, *np1);
    printf("%s\t%u\t%d\n", "number2", &number2, *np2);
    printf("%s\t%u\t%d\n", "sum", &sum, *sp);
    printf("%s\t%u\t%d\n", "*np1", &np1, np1);
    printf("%s\t%u\t%d\n", "*np2", &np2, np2);
    printf("%s\t%u\t%d\n", "*sp", &sp, sp);

    return 0;

    /* 
     * Incidentally, the printf() statements show how to display the address
     * of a variable. They use the %u format specifier, which represents the 
     * associated value as an unsigned integer. Note, however, that this 
     * technique for displaying the address of a variable is valid only on a 
     * 16-bit machine, such as an IBM PC. It failes in subtle ways on machines
     * with a different native word size. Also, the address is not an absolute
     * address; rather, it is an offset into the current data segment. An 
     * explanation of "segmented architecture" lies outside the scope of this 
     * book. -- from page 179. 
     * 
     * My results from this program were:
     * 
     * Name      Address      Value
     * ----      -------      -----
     * number1   6422092      5
     * number2   6422088      7
     * sum       6422084      12
     * *np1      6422072      6422092
     * *np2      6422064      6422088
     * *sp       6422056      6422084
     */ 
}