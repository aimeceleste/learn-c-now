/* 
 * C H 1 0 Q 5
 * 
 * Write a program that reads a string from the keyboard and counts
 * the numbers of characters in three categories: letters (a-z and 
 * A-Z), digits (0-9), and other characters. (Hint: Use character
 * classification macros, isdigit() and isalpha(), to test the characters.
 * These macros are defined in ctype.h).
 */
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define NBYTES  80

int main(void) {
    char buf[NBYTES + 1];    /* input buffer */
    /* counters */
    unsigned int i = 0; 
    unsigned int numl = 0; 
    unsigned int numd = 0; 
    unsigned int numo = 0;    
    /* end counters */
    fputs("Input string: ", stdout);

    if (gets(buf) == NULL) {
        fprintf(stderr, "ERROR: Cannot get input string\n");
        exit (1);
    }

    for (i = 0; buf[i] != '\0'; ++i) {
        if (isdigit(buf[i])) {
            ++numd; 
        } else if (isalpha(buf[i])) {
            ++numl; 
        } else {
            ++numo;   
        } 
    }
    printf("You had %u digits, %u letters, and %u other characters.", numd, numl, numo);

    return (0);
}