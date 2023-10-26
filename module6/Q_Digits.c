#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        do
        {
            printf("%d ", n % 10);
            n = n / 10;
        } while (n != 0);
        printf("\n");
    }

    return 0;
}