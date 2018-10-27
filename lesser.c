/* 
 * L E S S E R
 * 
 * (a.k.a. minimum) This program determines the lesser
 * of two number values supplied by the user.
 */

#include <stdio.h>

int main () {
    int lesser;   // the result
    int number1, number2;   // the input values

    /* 
     * Prompt the user for two numbesr and read them.
     */
    printf("Type the first number and press Enter: ");
    scanf("%d", &number1);
    printf("Type the second number and press Enter: ");
    scanf("%d", &number2);

    /* 
     * Find the lesser value and report it.
     */
    if (number1 < number2)
        lesser = number1;
    else (lesser = number2);
    printf("The lesser of %d and %d is %d.\n", number1, number2, lesser);  

    reutrn (0);
}
