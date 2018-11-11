/* 
 * Write another version of the program described in Exercise 3, 
 * but this time use a macro to do the calculation.
 */ 

#include <stdio.h>
#include <math.h>
#include <float.h>

#define PI 3.14159
#define MAX_RADIUS 4.0
#define VOLUME(x) 4 * PI * x * x * x 

int main(void) {
    double radius; 

    /* 
     * Print the title, column headers, and bars.
     */
    printf("=== Sphere Volumes ===\n");
    printf("Radius\tVolume\n");
    printf("======\t======\n");

    /* 
     * For each value of radius, prints the sphere's volume
     */
    for (radius = 0.0; radius <= MAX_RADIUS; radius+=0.2) {
        printf("%6.1lf\t%6.3lf\n", radius, VOLUME(radius));
    }
    
    return(0);
}