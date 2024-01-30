#include <stdio.h>

int main()
{
    // const variables are read-only, which means they cannot be modified by the program once they are declared.

    const float PI = 3.1416;
    printf("PI: %f\n", PI);

    // PI = 3.14; // error: assignment of read-only variable ‘PI’

    return 0;
}
