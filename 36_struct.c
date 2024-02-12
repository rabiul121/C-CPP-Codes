//
// Created by robi on 2/12/2024.
//


#include <stdio.h>
#include <string.h>

struct Player {
    char name[12];
    int score;
};
int main() {

    // Struct: Collection of related members (variables)
    // they can be different data types
    // listed under one name in block of memory
    //very similar to classes in other languages (but in methods)

    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "Robi");
    player1.score = 80;

    strcpy(player2.name, "Charu");
    player2.score = 75;

    printf("Name: %s\n", player1.name);
    printf("Score: %d\n", player1.score);
    printf("Name: %s\n", player2.name);
    printf("Score: %d\n", player2.score);


    return 0;
}