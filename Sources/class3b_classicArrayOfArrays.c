#include <stdio.h>
#include <string.h>

void classicArrayOfArrays() {
    
    char words[3][20] = {"Hello", "World", "C"};

    printf("Array of arrays (editable):\n");
    for (int i = 0; i < 3; i++) {
        printf("%s ", words[i]);
    }
    printf("\n");

    strcpy(words[0], "Hi");
    printf("After modification: %s\n", words[0]);
}
