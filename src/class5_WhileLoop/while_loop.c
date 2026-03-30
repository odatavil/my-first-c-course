#include <stdio.h>
#include "class5.h"

void whileLoop(int qtd) {
    int i = 0;
    while (i < qtd) {
        printf("id: %d\n", i);
        i++;
    }
}