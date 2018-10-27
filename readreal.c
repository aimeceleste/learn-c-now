/* 
* R E A D R E A L
* 
* Read a real number from the keyboard 
* and print it on the screen.
*/ 

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    
    printf("Enter a whole number and press ENTER: ");
    scanf("%ld", &number);
    printf("\nThe number you typed is %e.\n", number);

    return EXIT_SUCCESS;
}