//
// Created by robi on 2/11/2024.
//
#include <stdio.h>
#include <string.h>
int main() {

    char x = 'X';
    char y = 'Y';

    char temp;

    temp = x;
    x = y;
    y = temp;

    printf("x = %c\n", x);
    printf("y = %c\n", y);


    //  cannot use the above method for string array

    char fruit_a[] = "Apple";
    char fruit_b[] = "Banana";

    char temp_fruit[15];

    strcpy(temp_fruit, fruit_a);
    strcpy(fruit_a, fruit_b);
    strcpy(fruit_b, temp_fruit);

    printf("Fruit A = %s\n", fruit_a);
    printf("Fruit B = %s\n", fruit_b);


    return 0;
}