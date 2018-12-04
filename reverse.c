/* 
 * R E V E R S E
 * 
 * Reverse a string in memory.
 */
 #include <stdio.h>
 #include <stdlib.h>

 #define NBYTES  80

 /* 
  * Function prototypes
  */
 char *GetString(char *);
 char *ReverseString(char *);

 int main(void) {
     char buf[NBYTES + 1];    /* input buffer */

     /* 
      * Get a string from the user, reverse
      * it, and display the reversed string. 
      */
     if (GetString(buf) == NULL) {
         fprintf(stderr, "ERROR: Cannot get input string\n");
         exit (1);
     } 

     if (ReverseString(buf) == NULL) {
         fprintf(stderr, "ERROR: Empty string\n");
         exit (2);
     }
    printf("Reversed string: %s\n", buf);

    return (0);
}

/* 
 * GetString()
 * 
 * Prompt the user for a string and save the reply
 * in the specified input buffer. Return a pointer to 
 * the string buffer or NULL if a read error occurs.
 */

char *GetString(char *str) {
    fputs("Input string: ", stdout);
    if (gets(str) == NULL) 
        return NULL;

    return (str);
}

/* 
 * ReverseString()
 * 
 * Reverse a string in place. 
 */

char *ReverseString(char *str) {
    char *p, *q;    /* character pointers */
    char temp;      /* swap buffer */

    /* 
     * Point to the ends of the string. Report an 
     * empty string if the first character is NUL.
     */
    p = str;            /* first character */
    if (*p == '\0')     /* if NUL, string is empty */
        return NULL; 

    q = str; 
    while (*q != '\0')
        ++q;
    --q;                /* last character */

    /* 
     * Reverse the string and return a pointer to 
     * the beginning of the modified string buffer.
     */
    while (p < q) {
        temp = *p;     /* swap characters */
        *p = *q; 
        *q = temp; 
        ++p;           /* adjust pointers */
        --q; 
    }        

    return (str); 
}


