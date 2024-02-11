#include <stdio.h>

int main()
{
    // continue = skip rest of code & forces the next iteration of the loop
    // break = exit a loop/switch
    for (int number = 1; number <= 20; number++)
    {
        if (number == 13)
        {
            // continue; // this will skip number 13 and continue the loop.
            break; // this will break the loop after 12
        }
        else
        {
            printf("%d\n", number);
        }
    }

    return 0;
}