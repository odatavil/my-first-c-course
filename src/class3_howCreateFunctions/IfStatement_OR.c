#include <stdio.h>
#include "class3.h"

int IfStatement_OR(int num1, int num2, int num3) {
  int result;
  if (num1 > num2 || num1 > num3) {
    return printf("The num1 (%d) is greater than num2 (%d) or num3 (%d)\n", num1, num2, num3);
  } else if (num2 > num1 || num2 > num3) {
    return printf("The num2 (%d) is greater than num1 (%d) or num3 (%d)\n", num2, num1, num3);
  } else {
    return printf("The numbers are equal\n");
  }
};