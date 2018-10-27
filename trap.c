/* 
* TRAP
*
* Calculate the area of atrapezoid.
*/

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    /* Variable declaration */
    float area, top, base, height; 

    /* Get dimensions from the user. */
    printf("\n\tTRAPEZOID AREA CALCULATION\n\n");
    printf("Please enter the following measurements:\n\n");
    printf("                 top\n");
    printf("              _____________     ____\n");
    printf("             /             \\      |\n");
    printf("            /               \\    height\n");
    printf("           /_________________\\  __|_\n");
    printf("                 base\n\n");
    printf("Note: Please use numbers only.\n");
    printf("Enter the top measurement of the trapezoid: ");
    scanf("%f", &top);
    printf("Enter the base measurement of the trapezoid: ");
    scanf("%f", &base);
    printf("Enter the height measurement of the trapezoid: ");
    scanf("%f", &height);

    /* Calculate the base and print the area. */
    area = (top + base) * height / 2;
    printf("The area of the trapezoid is %.2f\n", area);

}