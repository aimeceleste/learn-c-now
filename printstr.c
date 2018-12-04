/* 
 * P R I N T S T R 
 * 
 * Compare the printing of strings using several 
 * methods, including indirect access via a pointer.
 */
#include <stdio.h>
#include <string.h>

int main(void) {
    int i;      /* loop index */
    int len;    /* string length */
    char *cp;    /* character pointer */

    static char string[] = {
        "What goes up must come down. Ask a market analyst!\n"
    };

    /* 
     * Print the string by using the printf() library function.
     */
    printf("Using printf(): ");
    printf("%s", string);

    /* 
     * Print the string by using array indexing. 
     */
    printf("Using an array index: ");
    len = strlen(string);    /* length of string */
    for (i=0; i < len; ++i) 
        putchar(string[i]);

    /* 
     * Print the string by using a character pointer.
     */
    printf("Using a character pointer: ");
    cp = string;    /* beginning of string */
    while (*cp) {
        putchar(*cp++);
    }

    return (0);
}
/* 
 * The pointer method is easier to implement than the indexed-array version, and it 
 * executes faster to boot. You set the character pointer to the beginning of the 
 * string (cp = string) and then loop as long as the value of *cp is not NUL ('/0').
 * The controlling expression in the while loop implies a comparison of the value
 * yielded by *cp with 0. As long as the expression evaluates to a nonzero value, the 
 * loop continues running. You can combine the two lines in the body of the loop: 
 * 
 * while (*cp) {
 *     putchar(*cp);
 *     ++cp;
 * }
 * into a single statement if you can tolerate the following cryptic-looking expression
 * (see above). In this compact form, the incrementing of the pointer variable, because
 * of the postfix notation, takes place after putchar() prints the character to which
 * cp is currently pointing. I doubt that the loss in clarity is repaid by any increase
 * in efficiency of the executable code. Nevertheless, you should recognize the code
 * in either form. 
 * 
 * Note that compactness can lead to subtle problems if you're not careful. As an 
 * exercise, replace the body of the while loop wiht the compact version above and 
 * rerun the program. Then, try changing putchar(*cp++) to putchar(*++cp) and 
 * running the program again. 
 * 
 * *** RUN 1 ***
 * Using printf(): What goes up must come down. Ask a market analyst!
 * Using an array index: What goes up must come down. Ask a market analyst!
 * Using a character pointer: What goes up must come down. Ask a market analyst!
 * *** RUN 2 ***
 * Using printf(): What goes up must come down. Ask a market analyst!
 * Using an array index: What goes up must come down. Ask a market analyst!
 * Using a character pointer: hat goes up must come down. Ask a market analyst!
 * 
 * (note the extra newline as well)
*/