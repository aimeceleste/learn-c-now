/* 
 * S U B S T R 
 * 
 * Extract a substring from a source string.
 */ 
#include <stdio.h>
#include <string.h>

void CopySubstring(char [], int, int, char []);

#define MAXSTR 100

int main(void) {
    char str1[MAXSTR];     /* input buffer */
    char str2[MAXSTR];     /* substring buffer */
    int i;                 /* array index */
    int spos;              /* starting index */
    int len;               /* requested length */

    /* 
     * Get the user's input.
     */
    printf("Enter the source string: ");
    gets(str1);
    printf("Enter the starting index: ");
    scanf("%d", &spos);
    printf("Enter substring length: ");
    scanf("%d", &len);

    /* 
     * Extract the substring
     */
    CopySubstring(str1, spos, len, str2);

    /* 
     * Display the result.
     */  
    if (strlen(str2) > 0)
        printf("Substring = %s\n", str2);
    else 
        puts("Empty substring--check your input values");

    return (0);
}

/* 
 * CopySubstring()
 * 
 * Extract a substring out of a source string. Copy from the
 * specified starting point until the requested number of characters
 * is copied or the end of the source string is reached.
 */

void CopySubstring(char source[], int start, int count, char result[]) {
    int i;    /* index */

    /* 
     * If the starting point is within the string, copy
     * characters from the source string to the result string.
     */
    if (start >= 0 && strlen(source) > start) 
        for (i = 0; i < count && source[start + i] != '\0'; ++i) 
            result[i] = source[start + i];

    /* 
     * Apply a string termination. Also supplies
     * bounds check for invalid input.
     */ 
    result[i] = '\0';

}

