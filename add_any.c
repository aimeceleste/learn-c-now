/* 
 * A D D _ A N Y 
 * 
 * Add values without regard to data type. This program uses 
 * a macro to do the calculation instead of using a separate 
 * function for each data type. 
 */
  
 #include <stdio.h>
 #include <stdlib.h> 

 #define ADD(a, b) ((a) + (b))

 int main() {
    int n1 = 20, n2 = 25;
    float f1 = 12.34, f2 = 56.78;

    /* 
     * Use the ADD macro to add a pair of integers. 
     */
    printf("%d + %d = %d\n", n1, n2, ADD(n1, n2));

    /* 
     * Use the ADD macro to add a pair of reals. 
     */
    printf("%f + %f = %f\n", f1, f2, ADD(f1, f2));

    /* 
     * We can even use the ADD macro with 
     * operands of mixed data types.
     */
    printf("%d + %f = %f\n", n1, f1, ADD(n1, f1));

    return (0);  

 }