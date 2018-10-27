/* 
* R E A D N U M
* 
* Read a number from the keyboard and print
* it on the screen.
*/ 

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int number;*/
    long number;

    printf("Enter a whole number and press ENTER: ");
    /*scanf("%d", &number);*/
    scanf("%ld", &number);
    /*printf("\nThe number you typed is %d.\n", number);*/
    printf("\nThe number you typed is %ld.\n", number);

    return EXIT_SUCCESS;
}