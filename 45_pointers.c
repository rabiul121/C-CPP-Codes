//
// Created by robi on 2/17/2024.
//
#include <stdio.h>

void printName(int *pAge) {
    printf("You are %d years old", *pAge);
}

int main() {

    int age = 21;
    int *pAge = &age;
    //    printf("address of age: %p\n", &age);
    //    printf("address of pAge: %p\n", pAge);
    //
    //    printf("size of age: %d bytes\n", sizeof(age));
    //    printf("size of pAge: %d bytes\n", sizeof(pAge));
    //
    //    printf("value of age: %d\n", age);
    //    printf("value at stored address: %d\n", *pAge);

    printName(pAge);


    return 0;
}