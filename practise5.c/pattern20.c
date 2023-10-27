#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d",&n);
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if((i+j)%4==0 || ((i==2)&&(j%4==0)))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}