/* 
 * Chapter 5, question 11 
 * 
 * Rewrite the following code to eliminate teh unnecessary goto statements:
 * 
 * int ch; 
 * read_input:
 *     ch = getchar();
 *     if (ch == 'q');
 *         goto end_read;
 *     putchar(ch);
 *     goto read_input
 * end_read: 
 */

#include <stdio.h> 

int main() {
    int ch;
    puts("Enter a character: \n");  
    while (1) {
        ch = getchar(); 
        switch (ch) {
            case 'q':
                putchar(ch);
                return (0); 
            default: 
                break; 
        }
    }    
}