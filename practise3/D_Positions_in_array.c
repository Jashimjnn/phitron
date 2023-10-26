#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n, x, y;
    scanf("%d", &n);
    long long int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &ar[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(ar[i]<=10)
        {
            printf("A[%d] = %lld\n",i,ar[i]);
        }
    }
    
    return 0;
}