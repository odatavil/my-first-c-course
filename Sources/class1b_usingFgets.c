#include <stdio.h>
#include <stdlib.h>

void usingFgets() {
    char name[20];
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    printf("Your name is: %s\n", name);
}
