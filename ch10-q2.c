/* 
 * C H 1 0 Q 2 
 * 
 * Write a program that prompts the user for a string of text and
 * prints it as a series of numbers (the ASCII codes that correspond
 * to the characters in the string.)
 */
#include <stdio.h>

#define MAXSTRING  40

int main(void) {
   char buffer[MAXSTRING + 1];   /* add 1 for NUL byte */
   char *ptr = buffer;

    /* 
     * Prompt the user for a string and read 
     * it into the input buffer.
     */
    printf("Type a string (%d characters max.) + ENTER: ", MAXSTRING);
    gets(buffer);

    /* 
     * Convert and display the string.
     */
    while (*ptr) {
        printf("%d ", *ptr);
        ptr++;
    }

}