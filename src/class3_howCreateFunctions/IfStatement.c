#include <stdio.h>
#include "class3.h"

int IfStatement(int num1, int num2) {
  int result;
  if (num1 > num2) {
    return printf("The num1 (%d) is greater than num2 (%d)\n", num1, num2);
  } else if (num2 > num1) {
    return printf("The num2 (%d) is greater than num1 (%d)\n", num2, num1);
  } else {
    return printf("The numbers (%d and %d) are equal\n", num1, num2);
  }
};