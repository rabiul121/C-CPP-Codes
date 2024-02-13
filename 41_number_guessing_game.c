//
// Created by robi on 2/13/2024.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {

    const int MIN = 0;
    const int MAX = 100;
    int guess;
    int guesses;
    int answer;
    // uses the current time as seed
    srand(time(0));


    // this will generate a random number between MIN & MAX
    answer = (rand() % MAX) + MIN;

    //    printf("Correct answer: %d\n", answer);

    do {
        printf("Enter a guess: ");
        scanf("%d", &guess);
        if (guess > answer) {
            printf("Too high!\n");
        } else if (guess < answer) {
            printf("Too low!\n");
        } else if (guess == answer) {
            printf("You guessed the correct number!\n");
        }
        guesses++;
    } while (guess != answer);
    printf("******************\n");
    printf("answer: \t%d\n", answer);
    printf("guesses: \t%d\n", guesses);
    printf("******************\n");

    return 0;
}