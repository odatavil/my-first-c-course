#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void datatypes() {
    int age;
    float height;
    double salary;
    char initial;
    char name[50];
    bool active;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your initial: ");
    scanf(" %c", &initial);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height (in meters): ");
    scanf("%f", &height);

    printf("Enter your salary: ");
    scanf("%lf", &salary);

    printf("Are you active? (1 for Yes, 0 for No): ");
    scanf("%d", (int*)&active);

    printf("\n--- Result ---\n");
    printf("Name: %s", name);
    printf("Initial: %c\n", initial);
    printf("Age: %d years\n", age);
    printf("Height: %.2f meters\n", height);
    printf("Salary: %.2lf\n", salary);
    printf("Active: %s\n", active ? "Yes" : "No");
}
