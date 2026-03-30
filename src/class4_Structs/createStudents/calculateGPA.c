#include <stdio.h>
#include "createStudent.h"

double calculateGPA(struct createStudent Student[], int qtd) {
    double totalGPA = 0.0;
    for (int i = 0; i < qtd; i++) {
        totalGPA += Student[i].gpa;
    }
    return totalGPA / qtd;
}