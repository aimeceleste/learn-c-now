/*
 * Chapter 5, question 9
 *
 * Use a do-while loop to reverse the digits of a number supplied by the user.
 */
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	/*
	 * Get the number supplied by the user
	 */
	int number, remainder, reverse = 0;
	printf("Enter a number you'd like to reverse: \n");
	scanf("%d", &number);
	printf("You entered %d\n", number);

	/*
	 * do
	 *    statement;
	 * while (expression);
	 */
	printf("The reverse is: ");
	do {
		remainder = number % 10;
		number /= 10; 
		reverse = reverse * 10 + remainder;
	} while (number > 0);

	printf("%d", reverse);
	return (0);
}