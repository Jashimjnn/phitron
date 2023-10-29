#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d",&n);
    int space=n-1;
    int k=1;
    for(int i=1;i<=(2*n-1);i++)
    {
        for(int j=1;j<=space;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=k;j++)
        {
            if(i%2!=0)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }
        printf("\n");
        if(i<=n-1)
        {
            space--;
            k+=2;
        }
        else
        {
            space++;
            k-=2;
        }
    }
    
    return 0;
}