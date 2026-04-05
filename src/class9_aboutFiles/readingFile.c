#include <stdio.h>
#include "class9.h"

void readFile() {
    FILE *filePtr = fopen("data.txt", "r");

    if (filePtr == NULL) {
        printf("Error opening file!\n");
        return;
    }

    char buffer[256];
    
    while (fgets(buffer, sizeof(buffer), filePtr) != NULL) {
        printf("%s", buffer);
    }

    fclose(filePtr);
}
