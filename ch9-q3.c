/* 
 * C H 9 Q 3
 * A program contains the following lines. What does it print?
 */
#include <stdio.h>

/* My guess is that it prints Z. */

int main() {
    char ch = 'M', *cp;
    cp = &ch;
    *cp = 'Z';
    putchar(ch);
}

/* It prints Z. */