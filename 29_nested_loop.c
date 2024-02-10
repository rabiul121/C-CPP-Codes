#include <stdio.h>
#include <string.h>

int main()
{
    int rows;
    int column;
    char symbol;

    printf("\nEnrer number of rows: ");
    scanf("%d", &rows);

    printf("\nEnter number of columns: ");
    scanf("%d", &column);

    printf("\nEnter a symbol to use: ");
    scanf(" %c", &symbol);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= column; j++)
        {
            printf("%c", symbol);
        }
        printf("\n");
    }

    return 0;
}