#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n,k;
    k=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=k;j++)
        {
            printf("* ");
        }
        printf("\n");
        k++;
    }
    
    return 0;
}