/* 
 * S T R I N G S 
 * 
 * Show how to print character strings that
 * involve various kinds of substitutions.
 */

#include <stdio.h>

int main(void) {
    static char word1[] = { "basket" };
    static char word2[] = { 'b', 'a', 'l', 'l', '\0' };
    printf("The goal in %s%s is to put the %s in the %s.\n", word1, word2, word2, word1);

    return 0;
}