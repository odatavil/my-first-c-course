#include <stdio.h>
#include "class6.h"

void print2DArray(int arr[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        printf("Iterating through the array: [%d]\n", i);
        for (int j = 0; j < cols; j++) {
            printf("%d, ", arr[i][j]);
        }
        printf("\n");
    }
}