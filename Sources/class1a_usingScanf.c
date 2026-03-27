#include <stdio.h>
#include <stdlib.h>

void usingScanf() {
    char name[20];
    printf("Enter your full name: ");
    scanf("%s", name);
    printf("Your name is: %s\n", name);
}
