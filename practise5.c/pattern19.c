#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d",&n);
    int count=1;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(int j=0;j<=i;j++)
        {
            if(i==0 || j==0)
            {
                count=1;
            }
            else
            {
                count=count*(i-j+1)/j;
            }
            printf("%d ",count);
        }
        printf("\n");
    }
    
    return 0;
}