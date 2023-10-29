#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void sum(int n)
{
    for(int i=1;i<=n;i++)
    {
        printf("%d",i);
        if(i<n)
        {
            printf(" ");
        }
    }
}

int main() 
{

    int n;
    scanf("%d",&n);
    sum(n);
    
    return 0;
}