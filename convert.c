/* 
* C O N V E R T 
* 
* Show the ffects of both implicat and explicit data 
* conversion in expressions involving different types.
*/

int main ()
{
    /* Variable declarations and initializations */
    char cv;
    int iv1 = 321;
    float fv1, fv2;

    /* 
     * Lost precision: Show the effect of storing an 
     * integer-size value in a character variable. 
     */
    printf("CONVERT:\n\n");
    cv = iv1;
    printf("Integer assigned to character: %d -> %d (%c)\n\n", iv1, cv, cv);

    /* 
     * Integer arithmetic: Show loss of fractional component
     * when numbers are involved in integer-only expressions 
     * and how to retain the fractional component.
     */
    fv1 = iv1 / 50;
    printf("Integer arithmetic: %d / 50 = %f\n", iv1, fv1);
    fv1 = iv1 / 50.0;
    printf("Real arithmetic: %d / 50.0 = %f\n\n", iv1, fv1);  

    /*
     * Promotion: In the following example, an integer 
     * is promoted to a float before being added to a 
     * floating-point variable.
     */
    fv1 = 1028.750;
    fv2 = fv1 + iv1;
    printf("%f + %d equals %f\n", fv1, iv1, fv2);

    return(0); 

}