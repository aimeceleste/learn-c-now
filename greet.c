/* 
* G R E E T 
* 
* Get the user's name and print a personalized greeting.
*/

#include <stdio.h>

int main()
{
    char name[40];

    /* Prompt for and read the user's first name. */
    printf("Enter your first name and press ENTER: ");
    scanf("%s40", name);

    /* Print the personalized greeting. */
    printf("\nGreetings, %s. Welcome to C programming!\n", name);
}