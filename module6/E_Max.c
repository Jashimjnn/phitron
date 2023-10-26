#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d",&n);
    int max=0;
    for(int i=1;i<=n;i++)
    {
        int x;
        scanf("%d",&x);
        if(max<x)
        {
            max=x;
        }
    }
    printf("%d\n",max);
    
    return 0;
}