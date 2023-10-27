#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d",&n);
    //along row
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=i;j++)
    //     {
    //         printf("%d",i);
    //     }
    //     printf("\n");
    // }
    
    // Along column
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=i;j++)
    //     {
    //         printf("%d",j);
    //     }
    //     printf("\n");
    // }

    // Along row char
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=i;j++)
    //     {
    //         printf("%c",i+64);
    //     }
    //     printf("\n");
    // }

    // Along row bit 
    //  for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=i;j++)
    //     {
    //         printf("%d",i%2);
    //     }
    //     printf("\n");
    // }

    //star print;
     for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}