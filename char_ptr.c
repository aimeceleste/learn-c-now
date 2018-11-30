/* 
 * C H A R _ P T R 
 * 
 * This program shows how to use a character pointer
 * to access a character variable indirectly.
 */
#include <stdio.h>

int main(void) {
    char ch;    /* character variable */
    char *cp;   /* character pointer  */

    /* 
     * Store the address of the character variable, 
     * ch, in teh character pointer variable, cp.
     */
    cp = &ch;   /* & is the "address of" operator */

    /* 
     * Assign the letter 'A' to ch directly and
     * print it out for the world to see. 
     */
    ch = 'A';
    printf("ch = %c\n", ch);   /* ch accessed directly */

    /* 
     * Assign the letter 'A' into ch via indirection 
     * through the pointer cp. Then print out the values 
     * of ch, *cp, and cp. 
     */
    *cp = 'A';                 /* indirect assignment */
    printf("ch = %c\n", ch);   /* ch read directly */
    printf("*cp = %c\n", *cp); /* ch read indirectly */
    printf("cp = %u\n", cp);   /* the address of ch */

    return (0); 

    /* 
     * results: 
     * ch = A
     * ch = A   
     * *cp = A
     * cp = 6422087
     */
}
