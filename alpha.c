/* 
 * A L P H A 
 * 
 * Create an integer array that holds the ASCII codes 
 * for the letters of the alphabet. Then print out 
 * the contents of the array in numeric order.
 */

#include <stdio.h>

#define NLETTERS 26

int main(void) {
    int alpha[NLETTERS];
    int i, length; 

    /* 
     * Assign values to the array. This loop assigns 
     * the letters of the alphabet to the array.
     */ 
    for (i = 0; i < NLETTERS; ++i) {
        alpha[i] = i + 'A';
    }

    /* 
     * Print out the contents of the array.
     */ 
    for (i = 0; i < NLETTERS; ++i) {
        putchar(alpha[i]);
    }
    putchar('\n');

    return(0);
}