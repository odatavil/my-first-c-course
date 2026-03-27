#include <stdio.h>

void classicArrayOfPointers() {

    char *words[3];
    
    words[0] = "Hello";
    words[1] = "World";
    words[2] = "C";

    printf("Classic Array of Pointers:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s ", words[i]);
    }
    printf("\n");
}
