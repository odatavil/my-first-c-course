#include <stdio.h>
#include "class9.h"

void writingFile(char text[]) {
    FILE *filePtr = fopen("data.txt", "w");

    if (filePtr == NULL) {
        printf("Error opening file!\n");
        return;
    }

    fprintf(filePtr, "%s\n", text);
    
    fclose(filePtr);
}