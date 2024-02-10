#include <stdio.h>

int main()
{
    // do-while loop: cheks a condition and executes a block of code if the condition is true
    // always execute the block of code onece, then check if the condition is true again
    int num = 0;
    int sum = 0;

    do
    {
        printf("Enter a num above 0: \n");
        scanf("%d", &num);

        if (num > 0)
        {
            sum += num;
        }

    } while (num > 0);

    printf("sum: %d\n", sum);

    return 0;
}