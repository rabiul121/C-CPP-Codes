#include <stdio.h>

int main()
{
    int age;
    printf("\nEnter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You are eligible for the sign up!");
    }
    else if (age == 0)
    {
        printf("You cannot sign up, you are just born!!");
    }

    else if (age < 0)
    {
        printf("You are not born yet!");
    }
    else
    {
        printf("You are not eligible to sign up.");
    }

    return 0;
}
