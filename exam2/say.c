#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int x,v;
    scanf("%d%d",&x,&v);
    for(int i=n-1;i>=0;i--)
    {
        if(i==x)
        {
        printf("%d ",v);
        }
        else
        {
            printf("%d ",ar[i]);
        }
    }
    
    return 0;
}