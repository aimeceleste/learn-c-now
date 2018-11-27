/* 
 * C H * Q 9 
 * 
 * The standard library function strlen() returns the number of
 * characters in a string, excluding the terminating NUL byte. Write
 * your own StringLength() function to do this job.
 */
#include <string.h>
#include <stdio.h>

int StringLength(char ch[]) {
    int counter; 
    while (ch[counter] != '\0') {
        counter++;
    }
    return counter;
}

int main(void) {
    char str[] = { "hashbrowns" };
    int count = StringLength(str);
    printf("%d", count);

    return 0;
}

