/* 
 * S I Z E 
 * 
 * Show the sizes in bytes of various data types.
 */

#include <stdio.h>

int main ()
{
    printf("Type      Bytes\n");
    printf("------   ------\n");
    printf("char     %d\n", sizeof (char));
    printf("short    %d\n", sizeof (short));
    printf("int      %d\n", sizeof (int));
    printf("long     %d\n", sizeof (long));
    printf("float    %d\n", sizeof (float));
    printf("double   %d\n", sizeof (double));
}