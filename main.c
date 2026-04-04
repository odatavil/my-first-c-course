#include <stdio.h>
#include "src/class1_basicConcepts/class1.h"
#include "src/class2_aboutArrays/class2.h"
#include "src/class3_howCreateFunctions/class3.h"
#include "src/class4_Structs/createStudents/class4_createStudent.h"
#include "src/class4_Structs/createBooks/class4_createBook.h"
#include "src/class5_Loops/while/class5_while.h"
#include "src/class5_Loops/for/class5_for.h"
#include "src/class6_2D_Arrays/class6.h"


int main() {

    int arr[][3] = {
        {50, 60, 70},
        {60, 50, 70},
        {70, 40, 70},
        {80, 30, 70},
        {80, 20, 70},
    };
    print2DArray(arr, 5, 3);

    return 0;
}