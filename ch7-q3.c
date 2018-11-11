/* 
 * Given that the formula for the volume of a sphere is 4 times pi times the cube 
 * of the radius, write a program that prints the volume for various radii 
 * between 0 and 4.0 units at increments of 0.2 units. 
 * Use a separate function to calculate the volume.
 */ 

#include <math.h>
#include <float.h>
#include <stdio.h> 

#define PI  3.14159
#define MAX_RADIUS  4.0
#define CUBE(x) ((x) * (x) * (x))

/* 
 * Function prototypes
 */
double SphereVolume(double);

int main(void) {
    double radius; 

    /* 
     * Print the banner, column titles, and bars
     */
    puts("=== Table of Sphere Volumes ===");
    puts("Radius\tVolume"); 
    puts("======\t======");

    /* 
     * For each value of radius, prints the sphere volume
     */
    for (radius = 0.0; radius <= (double)MAX_RADIUS; radius+=0.2) {
        printf("%6.1lf\t%6.3lf\n", radius, SphereVolume(radius));
    }

    return (0);
}

/* SphereVolume() function definition */
double SphereVolume(double radius) {
    double volume; 
    volume = 4 * PI * CUBE(radius);
    return (volume); 
}