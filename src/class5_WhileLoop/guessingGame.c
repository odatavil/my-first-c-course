#include <stdio.h>

void guessingGame(int numberToGuess, int guessLimit) {
    int userGuess = 0;
    int guessCount = 0;
    int outOfGuesses = 0;

    while (userGuess != numberToGuess && outOfGuesses == 0) {
        if (guessCount < guessLimit) {
            printf("Enter your guess: ");
            scanf("%d", &userGuess);
            guessCount++;

            if (userGuess < numberToGuess) {
                printf("Too low! Try again.\n");
            } else if (userGuess > numberToGuess) {
                printf("Too high! Try again.\n");
            } else {
                printf("Congratulations! You've guessed the number!\n");
            }
        } else {
            outOfGuesses = 1; // marca que acabou as tentativas
        }
    }

    if (outOfGuesses == 1 && userGuess != numberToGuess) {
        printf("Out of guesses. The number was %d.\n", numberToGuess);
    }
}