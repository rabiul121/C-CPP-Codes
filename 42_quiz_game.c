//
// Created by robi on 2/16/2024.
//

#include <ctype.h>
#include <stdio.h>

int main() {

    char questions[][100] = {
            "1. What is the name of the capital of Bangladesh? ",
            "2. What is the main food of Bangladeshi people? ",
            "3. Which is the largest mangrove forest in the world?  "};

    char options[][100] = {
            "A. Delhi", "B. Dhaka", "C. Singapore",
            "A. Bread", "B. Soup", "C. Rice",
            "A. Amazon Forest", "B. Sundarban", "C. Himalayan Forest"};

    char answers[3] = {'B', 'C', 'B'};


    int numberOfQuestions = sizeof(questions) / sizeof(questions[0]);
    char guess;

    int score = 0;

    printf("Quiz Game! \n");
    for (int i = 0; i < numberOfQuestions; ++i) {
        printf("******************************************************\n");
        printf("%s\n", questions[i]);
        printf("******************************************************\n");

        for (int j = (i * 3); j < (i * 3) + 3; j++) {
            printf("%s\n", options[j]);
        }
        printf("Guess: ");
        scanf(" %c", &guess);// Space before %c skips leading whitespace
                             //        scanf("%c");// clear \n from input buffer


        guess = toupper(guess);

        if (guess == answers[i]) {
            printf("CORRECT!\n");
            score++;
        } else {
            printf("WRONG!\n");
        }
    }
    printf("Final Score: %d/%d\n", score, numberOfQuestions);

    return 0;
}