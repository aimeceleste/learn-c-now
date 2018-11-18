/* 
 * H E X D E M O
 * 
 * Demonstrate the conversion of decimal numbesr to 
 * hexadecimal presentation.
 */

#include <stdio.h>

char DecToHex(int);

int main(void) {
    int number; 

    /* 
     * Prompt the user for number and read it. Then
     * convert the number to hex and print it.
     */ 
    printf("Enter a decimal number (0 through 15); ");
    scanf("%d", &number);
    printf("%d -> %c hex\n", number, DecToHex(number));

    return (0);
}

/* 
 * DecToHex()
 * 
 * Convert a number from decimal to hexadecimal.
 */

char DecToHex(int digit) {
    char hexchar;
    static char hextab[] = {
        '0', '1', '2', '3', '4', '5', '6', '7', 
        '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'
    };

    /* 
     * Guarantee that the digit is in range (modulo 16) and 
     * look up the equivalent hex digit in the conversion table.
     */
    hexchar = hextab[digit % 16];

    return (hexchar); 
}