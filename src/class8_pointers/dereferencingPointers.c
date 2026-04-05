#include <stdio.h>
#include "class8.h"

void dereferencingPointers(int age, double gpa, char grade) {

    int *agePtr = &age;
    double *gpaPtr = &gpa;
    char *gradePtr = &grade;

    printf("Dereferenced Age: %d\n", *agePtr);
    printf("Dereferenced GPA: %.2f\n", *gpaPtr);
    printf("Dereferenced Grade: %c\n", *gradePtr);
}