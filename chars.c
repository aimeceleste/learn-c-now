/* 
* C H A R S 
* 
* Show how to print characters and show the relationship
* between characters and their internal codes.
*/

main()
{
    /* Declare variables. */
    char ch;
    int code; 

    /* Initialize variables. */
    ch = 'A';
    code = 48;

    /* Print the codes and characters. */
    printf("Our PCs use the ASCII character set.\n");
    printf("The ASCII code for the letter %c is %d.\n", ch, ch);
    printf("The ASCII code %d represents the character %c.\n", code, code);
}