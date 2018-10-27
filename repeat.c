/* 
 * R E P E A T 
 * 
 * Ask the user for a character and acount. Display the 
 * character the number of times specified by count. 
 */

#include <stdio.h>

int main() {
    char ch;
    int count;
    printf("Type the character to repeat: ");
    scanf("%ls", &ch);
    printf("Type the repetition count: ");
    scanf("%d", &count);

    while (count > 0) {
        printf("%c", ch);
        --count;
    }
    printf("\n");
    return (0);
}