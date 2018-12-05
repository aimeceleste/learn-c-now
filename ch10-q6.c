/* 
 * C H 1 0 Q 6 
 * 
 * The XSORT program sorts an array of integers. Revise it to sort an
 * array of floating-point numbers. 
 */
#define SHOWME 

#include <stdio.h>

void ExchangeSort(float *, unsigned int);

int main(void) {
    int n;          /* loop control variable */
    float *ptr;       /* float pointer */
    int size;       /* calculated array size in elements */

    /* array data */
    static float numbers[] = {
        82.4, 30.01, 12.743, 1.01, -6.103
    };

    /* 
     * Calculate the array size and display
     * the array in its initial condition. 
     */
    size = sizeof numbers / sizeof (float); 
    puts("Array before sorting:");
    for (n = size, ptr = numbers; n-- > 0; ++ptr) 
        printf("%5d  ", *ptr);
    putchar('\n');
    putchar('\n');

    /* 
     * Sort the array
     */
    ExchangeSort(numbers, size);

    /* 
     * Display the array after sorting
     */
    puts("\nArray after sorting:");
    for (n = size, ptr = numbers; n-- > 0; ++ptr)
        printf("%5f  ", *ptr);
    putchar('\n');

    return (0);   
}

/* 
 * ExchangeSort()
 * 
 * A simple exchange sort function
 */
void ExchangeSort(float *array, unsigned int nelem) {
    float *p, *q;       /* array indexes */
    float temp;         /* buffer for exchanges */

#if defined (SHOWME) 
    int loopcount = 0;
    float *ptr;
#endif 

    for (p = array; p < array + nelem - 1; ++p) {
#if defined (SHOWME)
        printf("Loop %d:\n", ++loopcount);
#endif 
        for (q = p + 1; q < array + nelem; ++q) {
                if (*p > *q) {
                    temp = *p;
                    *p = *q;
                    *q = temp;
                }
#if defined (SHOWME)
                /* 
                 * Show partially sorted array after each
                 * pass of the inner loop.
                 */
                for (ptr = array; ptr < array + nelem; ++ptr)
                    printf("%5f  ", *ptr);
                putchar('\n');
#endif                 
        }                
    }
} 