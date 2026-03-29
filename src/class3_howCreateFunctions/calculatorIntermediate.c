#include <stdio.h>
#include "class3.h"

double calculatorIntermediate() {
    double num1, num2, result;
    char operator;

    printf("=== Intermediate Calculator ===\n");
    printf("Enter an expression (e.g., 3 + 4): ");
    scanf("%lf %c %lf", &num1, &operator, &num2);

    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: division by zero!\n");
            }
            break;
        default:
            printf("Invalid operator!\n");
    }
    return result;
}