#include <stdio.h>

void initializedArrayOfArrays() {
    
    char words[][20] = {"Apple", "Banana", "Cherry"};
    int size = sizeof(words) / sizeof(words[0]);

    printf("Array of arrays (initialized):\n");
    for (int i = 0; i < size; i++) {
        printf("%s ", words[i]);
    }
    printf("\n");
}
