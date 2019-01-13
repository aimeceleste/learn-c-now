/* 
 * Declare a structure that contains members for a student's last 
 * name, first name, and a numeric grade. Then write a program
 * that prompts the instructor with each student name and collects 
 * test grades typed at the keyboard. Accept -1 as a code that the
 * student did not take the test. After data entry is complete, print a 
 * summary table (name, grade) and the calculated average grade.
 */
#include <stdio.h> 
#include <string.h>

#define K_ESC        27
#define MAXSTUDENTS  3

/* structure template */ 
struct student {
    char lName[8];
    char fName[8];
    float grade;
};

int main(void) {
    struct student Stus[MAXSTUDENTS]; 

    for (int i = 0; i < MAXSTUDENTS ; i++) {
        printf("Type a student's last name (8 or fewer characters): ");
        scanf("%s", &Stus[i].lName); 
        printf("Type a student's first name (8 or fewer characters: ");
        scanf("%s", &Stus[i].fName);
        printf("Type a student's grade: ");
        scanf("%f", &Stus[i].grade);  
    } 

    /* test populating your struct 
    for (int i = 0; i < 3 ; i++) {
        printf("You typed Student[%d] last name = %s, first name = %s, grade = %f\n",
        i, Stus[i].lName, Stus[i].fName, Stus[i].grade); 
    } */

    /* calculate the grade average with another loop */ 
    float gradeTotal = 0; 
    float gradeAverage = 0; 

    for (int i = 0; i < MAXSTUDENTS; ++i) {
        if (Stus[i].grade != -1) {
            gradeTotal += Stus[i].grade;
        }
    }
    gradeAverage = gradeTotal / MAXSTUDENTS; 

    printf("=== Summary Table ===\n");
    for ( int i = 0 ; i < MAXSTUDENTS ; i++ ) {
        printf("Student name: %s %s, grade: %.2f\n", Stus[i].fName, Stus[i].lName, Stus[i].grade);
    }
    printf("A -1 grade indicates a missed test.\n");
    printf("The average grade for the class is %.2f\n", gradeAverage);

    return 0; 
}