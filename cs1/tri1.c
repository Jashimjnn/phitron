#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows;
    printf("Enter the  number of rows to Pyramid: ");
    scanf("%d", &rows);
    int i, j, k;
    for (i = rows; i >= 1; i--)
    { // Print each row
        for (j = rows; j > i; j--)
        {
            printf(" ");
        }
        for (k = 1; k < 2 * i; k++)
        {

            if (i == rows || (k == 1 || k == 2 * i - 1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}