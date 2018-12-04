/* 
 * C H 9 Q 6
 * 
 * Write a program that prints the value of each element in the 
 * following array, one value per line of output. Use a pointer, not an
 * array index, to access array elements, and calculate the array size
 * rather than using a defined constant. 
 */

#include <stdio.h>

int main(void) {
    int i; 
    int len; 
    int *np; 
    static int number[] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    };
    
    len = sizeof(number) / sizeof(int);

    np = number; 
    for (i = 0; i < len; ++i) {
        printf("Number: %d\n", *np);
        *np++;
    }

    /* doesn't work:
    while (*np) {
        printf("Number: %u", *np);
        *np++;
    }
    */
    /* this works but isn't doing it the way the question requests 
    for (i = 0; i < len; ++i) {
        printf("Number: %d\n", number[i]);
        np++;
    }
    */

    return 0;

}