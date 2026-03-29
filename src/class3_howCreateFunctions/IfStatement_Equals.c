#include <stdio.h>
#include "class3.h"

int IfStatement_Equals(int num1, int num2) {
  int result;
  if (num1 == num2) {
    return printf("The numbers (%d and %d) are equal\n", num1, num2);
  } else {
    return printf("The numbers (%d and %d) are not equal\n", num1, num2);
  }
}