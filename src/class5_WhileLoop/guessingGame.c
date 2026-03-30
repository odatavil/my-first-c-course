#include <stdio.h>
#include "class5.h"

void guessingGame(int numberToGuess) {
    int userGuess = 0;

    while (userGuess != numberToGuess) {
        printf("Enter your guess: ");
        scanf("%d", &userGuess);

        if (userGuess < numberToGuess) {
            printf("Too low! Try again.\n");
        } else if (userGuess > numberToGuess) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You've guessed the number!\n");
        }
    }
}