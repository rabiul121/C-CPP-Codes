//
// Created by robi on 2/17/2024.
//
#include <stdio.h>
int main() {

    char a = 'X';
    char b = 'Y';
    char c = 'Z';

    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));
    printf("%d bytes\n", sizeof(c));

    printf("Address a: %p\n", &a);
    printf("Address b: %p\n", &b);
    printf("Address c: %p\n", &c);

    return 0;
}
