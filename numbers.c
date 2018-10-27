/* 
* N U M B E R S 
* 
* Show how to print strings that involve 
* both text and numbers.
*/
#include <stdio.h>

main()
{
    /* int n1, n2; */
    long n1; 
    short n2;

    n1 = 10;
    n2 = 3;
    /* printf("The number %d is bigger than the number %d.\n", n1, n2); */

    printf("The number %ld is bigger than the number %hd.\n", n1, n2); 

}