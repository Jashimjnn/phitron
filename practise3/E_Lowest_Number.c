#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<limits.h>
int main() 
{

    int n, x, y;
    scanf("%d", &n);
    long long int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &ar[i]);
    }
    int mi = INT_MAX,pos;
    for(int i=0;i<n;i++)
    {
        if(ar[i]<mi)
        {
          mi = ar[i];
          pos=i;
        }
    }
    printf("%d %d\n",mi,pos+1);
    
    return 0;
}