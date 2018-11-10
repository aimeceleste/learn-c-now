/* 
 * B A N N E R 
 * 
 * Print a message surrounded by a border. Use 
 * functions to draw the elements of the border.
 */

#include <stdio.h> 

#define WIDTH 72
#define ROWS 4

int Line (){
    int x;
    for (x = 0; x <= WIDTH; ++x)
        putchar('*');
    putchar('\n');
}

int Sides (){
    int y;
    for (y = 0; y <= ROWS; ++y)
        printf("*\t\t\t\t\t\t\t\t\t*\n");
}

int main(){
    Line();
    Sides();
    printf("*\t\t\t   (your ad here)\t\t\t\t*\n");
    Sides();
    Line();

    return (0);
}