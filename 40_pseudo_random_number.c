#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {

    // pseudo random numbers = A set of values or elements that are statistically random
    //           (Don't use these for any sort of cryptographic security)

    srand(time(0));
    int number1 = (rand() % 20) + 1;  // generates random number between 0 and 20
    int number2 = (rand() % 100) + 1; // generates random number between 0 and 100
    int number3 = (rand() % 1000) + 1;// generates random number between 0 and 1000
    printf("%d\n", number1);
    printf("%d\n", number2);
    printf("%d\n", number3);

    return 0;
}