/*
 * 2 D A R R A Y
 * 
 * Create a two-dimensional array, initialize it, 
 * and then print all its element values.
 */

#include <stdio.h>

#define ROWS 4
#define COLS 2

int main(void) {
    int row, col;

    static int data[4][2] = {
            { 11, 22 },
            { 33, 44 },
            { 55, 66 },
            { 77, 88 }
    };

    /* 
     * Print the contents of the array. 
     */
    for (row = 0; row < ROWS; ++row)
        for (col = 0; col < COLS; ++col)
            printf("data[%d][%d] = %d\n", 
                row, col, data[row][col]);
    return (0); 
}