/*
 * A R E A 
 * 
 * Print a table of circle and sphere areas for 
 * radii in the range of 0 through 2 in 0.2 increments.
 */

#include <float.h>
#include <math.h>
#include <stdio.h>

#define MAX_RADIUS  2.0
#define PI          3.141529

/* 
 * Function prototypes.
 */
double CircleArea(double);
double SphereArea(double);

int main(void) {
    double radius; 

    /* 
     * Print the banner, column titles, and bars.
     */
    puts("=== Table of Areas ===");
    puts("Radius\tCircle\tSphere");
    puts("------\t------\t------");
    /* 
     * For each value of radius, print the radius and 
     * surface areas for the resulting circle and sphere.
     */
    for (radius = 0.0; radius <=(double)MAX_RADIUS; radius+=0.2)
        printf("%6.2lf\t%6.3lf\t%6.3lf\n", radius, CircleArea(radius), SphereArea(radius));

    return(0);  
}

/* 
 * CircleArea()
 * 
 * Calculate the area of a circle for the specified radius
 */
double CircleArea(double radius) {
    double area;
    area = PI * (radius * radius);
    return(area);
}

/* 
 * SphereArea()
 * 
 * Calculate the surface area of a sphere for the specified radius.
 */
double SphereArea(double radius) {
    double area;
    area = 4.0 * PI * (radius * radius);
    return(area);
} 
