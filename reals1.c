/*
* R E A L S 1 and R E A L S 2
*
* Display a real number in several 
* differnt formats.
* 
* Display real data values in several 
* different formats.
*/

main()
{
    /* Data declaration and initialization. */
    float fv = 1026.75;

    /* Print data in different formats */
    printf("Variable fv = %f\n", fv);
    printf("Variable fv = %e\n", fv);
    printf("Variable fv = %E\n", fv);
    printf("Variable fv = %g\n", fv);
    printf("Variable fv = %G\n", fv);

    double dv = 0.00000000000813;

    printf("Variable fv = %.3f\n", fv);
    printf("Variable fv = %.4E\n", fv);
    printf("Variable dv = %.15f\n", dv);
    printf("Variable dv = %G\n", dv);
}