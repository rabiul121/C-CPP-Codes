//
// Created by robi on 2/11/2024.
//


#include <stdio.h>
int main() {
    int number[][3] = {{1, 2, 3},
                       {4, 5, 6},
                       {7, 8, 9},
                       {10, 11, 12}};

    int row = sizeof(number) / sizeof(number[0]);
    int column = sizeof(number[0]) / sizeof(number[0][0]);

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            printf("%d\t", number[i][j]);
        }
        printf("\n");
    }
    return 0;
}