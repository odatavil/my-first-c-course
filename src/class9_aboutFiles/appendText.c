#include <stdio.h>
#include "class9.h"

void appendText(char text[]) {
    FILE *filePtr = fopen("data.txt", "a");

    if (filePtr == NULL) {
        printf("Error opening file!\n");
        return;
    }

    fprintf(filePtr, "%s\n", text);
    
    fclose(filePtr);
}