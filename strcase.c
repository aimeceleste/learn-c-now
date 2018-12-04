/* 
 * S T R C A S E
 * 
 * Display a string in each of several presentation formats: 
 *     - all uppercase
 *     - all lowercase 
 *     - initial capital letter 
 */
#include <stdio.h>
#include <ctype.h>    /* for conversion macros */

/* 
 * Function protopyes
 */ 
char *StringUpper(char *);
char *StringLower(char *);
char *StringCapitalize(char *);

#define MAXSTRING 20

int main(void) {
    char buffer[MAXSTRING + 1];   /* add 1 for NUL byte */

    /* 
     * Prompt the user for a string and read 
     * it into the input buffer.
     */
    printf("Type a string (%d characters max.) + ENTER: ", MAXSTRING);
    gets(buffer);

    /* 
     * Convert and display the string (three ways).
     */
    printf("%s\n", StringUpper(buffer));
    printf("%s\n", StringLower(buffer));
    printf("%s\n", StringCapitalize(buffer));

    return (0); 
}

/* 
 * StringUpper()
 * 
 * Convert all the alphabetic characters in a string 
 * to uppercase. Nonalpha characters are unaffected. 
 */
char * StringUpper(char *string) {
    char *cp; 

    cp = string;
    while (*cp != '\0') {
        *cp = toupper(*cp);
        ++cp;
    }

    return (string);
} 

/* 
 * StringLower()
 * 
 * Convert all the alphabetic characters in a string
 * to lowercase. Nonalpha characters are unaffected.
 */
char * StringLower(char *string) {
    char *cp;

    cp = string; 
    while (*cp != '\0') {
        *cp = tolower(*cp);
        ++cp;
    }

    return (string);
}

/* 
 * StringCapitalize()
 * 
 * Convert the first character in a string to uppercase and
 * the rest to lowercase. Nonalpha characters are unaffected. 
 */
char * StringCapitalize(char *string) {
    char *cp;

    cp = string;
    *cp = toupper(*cp);
    ++cp;
    while (*cp != '\0') {
        *cp = tolower(*cp);
        ++cp;
    }

    return (string);
} 
