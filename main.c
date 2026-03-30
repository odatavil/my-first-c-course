#include <stdio.h>
#include "src/class1_basicConcepts/class1.h"
#include "src/class2_aboutArrays/class2.h"
#include "src/class3_howCreateFunctions/class3.h"
#include "src/class4_Structs/createStudents/createStudent.h"


int main() {    
    struct createStudent students[3] = {
        {"Alice Smith", 22, "Mathematics", 3.8},
        {"Bob Johnson", 21, "Physics", 3.6},
        {"Charlie Brown", 19, "Chemistry", 3.7}
    };
    printStudent(students, 3);
    double gpa = calculateGPA(students, 3);
    printf("Average GPA: %.2f\n", gpa);
    return 0;
}