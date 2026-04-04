#include <stdio.h>
#include "class7.h"

void printMemoryAddresses(int age, double gpa, char grade) {
    printf("Memory address of age: %p\n", (void*)&age);
    printf("Memory address of gpa: %p\n", (void*)&gpa);
    printf("Memory address of grade: %p\n", (void*)&grade);
}