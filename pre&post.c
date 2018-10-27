/* 
 * P R E & P O S T
 * 
 * Demonstrate the uses of prefix and postfix notation
 * in arithmetic expressions
 */

int main ()
{
    /* Initialize and declare variables */
    int x = 2, y = 3, result;

    /* Show values before and after expression evaluation. */
    printf("\nSTARTING VALUES: x = %d; y = %d\n", x, y);
    result = ++x + y;
    printf("PREFIX: The result of ++x + y = %d\n", result);
    printf("(After calculation, x = %d and y = %d)\n", x, y);

    x = 2, y = 3; /* Restore values */
    printf("\nSTARTING VALUES: x = %d; y = %d\n", x, y);
    result = x++ + y; 
    printf("POSTFIX: The result of x++ + y = %d\n", result);
    printf("(After calculation, x = %d and y = %d)\n", x, y);
}