/* 
 * C H 8 Q 1 0 
 * 
 * You are given this array declaration: 
 * int array[] = {
 *     10, 20, 30, 40, 50, 60
 * };
 * Write a program that uses a loop to exchange the outermost pair
 * of element values, then the next interior pair, and finally, the 
 * innermost pair. Write the program so that it is not sensitive to 
 * the number of elements in the array and test it on an integer 
 * array that contains nine elements.
 */
#include <stdio.h> 
#define SIZE(x) sizeof (x) / sizeof (int)

int SwapValues(int arr[], int size) {
    int iter = size / 2; /* iterator tells me how many times to go through the loop */ 
    for (int i = 0; i < iter; ++i) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i]; /* use size - 1 for the total size of the array, since the index starts at 0 */
        arr[size - 1 - i] = temp;
    }
}

int main(void) {
    int array[] = {
        10, 20, 30, 40, 50, 60
    };
    int array2[] = {
        10, 20, 30, 40, 50, 60, 70, 89, 90
    };
    SwapValues(array, SIZE(array));
    /* print the contents of the array in a for loop -- not what you have right now */
    for (int i = 0; i < (SIZE(array) - 1); ++i) {
        printf("This is the swapped default array: %d\n", array[i]);
    }
    SwapValues(array2, SIZE(array2));
    for (int i = 0; i < (SIZE(array2) - 1); ++i) {
        printf("This is the swapped 9 values array: %d\n", array2[i]);
    }
}