#include <stdio.h>

void initializedArrayOfPointers() {
    
    char *words[] = {"Hello", "World", "C"};
    int size = sizeof(words) / sizeof(words[0]);

    printf("Initialized Array of Pointers:\n");
    for (int i = 0; i < size; i++) {
        printf("%s ", words[i]);
    }
    printf("\n");
}
