/* 
 * I N S T R U C T
 * 
 * This program determines whether its user
 * can follow simple instructions
 */

#include <stdio.h>

int main () {
    char ch;

    printf("Type the letter T and press Enter: ");
    scanf("%1s", &ch);
    if (ch != 'T') {
        printf("Sorry, you don't make the team!\n");
        return (1);
    }
    printf("Excellent! You're very cooperative.\n");
    return (0);
}
