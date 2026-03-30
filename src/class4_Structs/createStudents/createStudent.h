#ifndef CLASS4_H
#define CLASS4_H

struct createStudent {
    char name[50];
    int age;
    char major[50];
    double gpa;
};

void printStudent(struct createStudent Student[], int qtd);
double calculateGPA(struct createStudent Student[], int qtd);

#endif