/* 
 * A D D
 * 
 * This program demonstrates the use of functions
 * to perform calculations. A separate function is
 * needed for each data type. 
 */

#include <stdio.h> 

/*
 * AddIntegers()
 * 
 * This function takes two integer arguments
 * and returns their sum in a long integer.
 */
long AddIntegers(int number1, int number2) {
    long total;
    total = (long)number1 + (long)number2;
    return (total);
}

/* 
 * Addreals()
 * 
 * This function takes two float arguments
 * and returns their sum in a double.
 */
double AddReals(float number1, float number2) {
    double total;
    total = (double)number1 + (double)number2;
    return (total);
}

int main() {
    int n1 = 20, n2 = 25;
    float f1 = 12.34, f2 = 56.78; 

    /* Add two integers. */
    printf("%d + %d = %ld\n", n1, n2, AddIntegers(n1, n2));

    /* Add two real numbers. */
    printf("%f + %f = %f\n", f1, f2, AddReals(f1, f2));

    return (0);
}
