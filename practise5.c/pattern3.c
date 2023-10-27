#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
    // int s=0;
    // int k=n;
    // for(int i=n;i>=1;i--)
    // {
    //     for(int j=0;j<s;j++)
    //     {
    //         printf(" ");
    //     }
    //     for(int j=1;j<=k;j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    //     s++;
    //     k-=2;
    // }

    return 0;
}