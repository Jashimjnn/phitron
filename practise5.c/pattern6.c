#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d",&n);
    // star print;
    // for(int i=n;i>=1;i--)
    // {
    //     for(int j=1;j<=i;j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // integer print;
    // for(int i=n;i>=1;i--)
    // {
    //     for(int j=1;j<=i;j++)
    //     {
    //         printf("%d",i);
    //     }
    //     printf("\n");
    // }

    //char print;
    // for(int i=n;i>=1;i--)
    // {
    //     for(int j=1;j<=i;j++)
    //     {
    //         printf("%c",i+64);
    //     }
    //     printf("\n");
    // }

    // Bit print;
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",i%2);
        }
        printf("\n");
    }
    
    return 0;
}