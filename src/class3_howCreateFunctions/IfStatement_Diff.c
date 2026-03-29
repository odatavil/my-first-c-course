#include <stdio.h>
#include "class3.h"

int IfStatement_Diff(int num1, int num2) {
  int result;
  if (num1 != num2) {
    return printf("The num1 (%d) is different from num2 (%d)\n", num1, num2);
  } else {
    return printf("The numbers (%d and %d) are equal\n", num1, num2);
  }
};