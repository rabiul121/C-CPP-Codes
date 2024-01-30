#include <stdio.h>
#include <stdbool.h> // for bool data type

int main()
{
    /*
        Basic Data Types:
        ------------------
        int: Integer data type represents whole numbers.
        float: Float data type represents floating-point numbers (real numbers).
        double: Double data type represents double-precision floating-point numbers.
        char: Char data type represents a single character.

        Derived Data Types:
        -------------------
        Array: An array is a collection of elements of the same data type.
        Pointer: A pointer is a variable that stores the memory address of another variable.
        Structure: Structure allows you to group variables of different data types under a single name.
        Union: Union is similar to a structure, but it uses the same memory location for all its members.

    */

    int age = 26;
    printf("age: %d\n", age); // %d is format specifier

    float weight = 55.5;
    printf("weight: %f\n", weight); // %f is format specifier

    double doubleNumber = 2.74866;
    printf("doubleNumber: %lf\n", doubleNumber); // %lf is format specifier

    char firstLetter = 'A';
    printf("letter: %c\n", firstLetter); // %c is format specifier

    char name[] = "Robi";
    printf("name: %s\n", name); // %s is format specifier

    int arr[5] = {1, 2, 3, 4, 5};
    printf("arr[0]: %d\n", arr[0]); // %d is format specifier

    bool isTrue = true;
    printf("isTrue: %d\n", isTrue); // %d is format specifier

    char f = 120;         // (-128 to +127) %d or %c
    printf("f: %c\n", f); // %c is format specifier
    printf("f: %d\n", f); // %d is format specifier

    unsigned char g = 150; // (0 to +255) %d or %c
    printf("g: %d\n", g);  // %c is format specifier

    return 0;
}
