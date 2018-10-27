/* 
 * C H A P T E R F O U R N U M B E R E I G H T 
 * 
 * Write a program that gathers a number from the user
 * Accepts a range 0 through 65,535
 * Inverts all bits then prints the decimal value of the modified number
 */ 

#include <stdio.h>

int main ()
{
    unsigned short int number, complement;
    printf("Enter a whole number between 0 and 65,535 then press ENTER: ");
    scanf("%u", &number);
    printf("The number you typed is %u.\n", number);
    complement = ~number;
    printf("The bitwise complement of the number you typed is %u.\n", complement);

}