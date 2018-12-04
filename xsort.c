/* 
 * X S O R T 
 * 
 * Sort an array of numbers by using a simple exchange sort. 
 */
/* can delete / comment out the #define SHOWME on line 9 to stop the 
* display of the intermediate loops if desired. 
*/
#define SHOWME 

#include <stdio.h>

void ExchangeSort(int *, unsigned int);

int main(void) {
    int n;          /* loop control variable */
    int *ptr;       /* integer pointer */
    int size;       /* calculated array size in elements */

    /* array data */
    static int numbers[] = {
        82, 30, 12, 1, -6
    };

    /* 
     * Calculate the array size and display
     * the array in its initial condition. 
     */
    size = sizeof numbers / sizeof (int); 
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
        printf("%5d  ", *ptr);
    putchar('\n');

    return (0);   
}

/* 
 * ExchangeSort()
 * 
 * A simple exchange sort function
 */
void ExchangeSort(int *array, unsigned int nelem) {
    int *p, *q;       /* array indexes */
    int temp;         /* buffer for exchanges */

#if defined (SHOWME) 
    int loopcount = 0;
    int *ptr;
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
                    printf("%5d  ", *ptr);
                putchar('\n');
#endif                 
        }                
    }
} 