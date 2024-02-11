//
// Created by robi on 2/11/2024.
//
#include <stdio.h>
#include <string.h>

int main() {

    // string array, can reassign/replace array items with strcpy()

    char fruits[][10] = {"Apple", "Grape", "Orange", "Banana"};

    strcpy(fruits[0], "Mango");
    for (int i = 0; i < sizeof(fruits) / sizeof(fruits[0]); i++) {
        printf("%s\n", fruits[i]);
    }

    return 0;
}