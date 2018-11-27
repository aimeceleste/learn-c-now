/* 
 * C H 8 Q 6
 * 
 * An integer array is initialized with the following element values: 
 * 12, 34, 56, 78. Write a program that contains this array, sums the 
 * array elements, and calculates the average value. Print the sum 
 * and the average. 
 */ 

#include <stdio.h>

#define SIZE 4

int main(void) {
    int sum, avg, i; 
    static int numbers[] = { 12, 34, 56, 78 };

    for (i = 0; i < SIZE; ++i) 
        sum = sum + numbers[i];

    avg = sum / SIZE; 

    printf("sum = %d, avg = %d", sum, avg);
}