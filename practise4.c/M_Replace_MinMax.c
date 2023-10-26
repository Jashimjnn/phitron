#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<limits.h>
int main() 
{

    long long int n;
    scanf("%lld",&n);
    long long int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    int ma = INT_MIN,po;
    int mi = INT_MAX,po1;
    for(int i=0;i<n;i++)
    {
        if(ma<a[i])
        {
            ma=a[i];
            po=i;
        }
        if(mi>a[i])
        {
            mi = a[i];
            po1=i;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(po==i)
        {
            printf("%d ",mi);
        }
        else if(po1==i)
        {
            printf("%d ",ma);
        }
        else
        {
            printf("%lld ",a[i]);
        }
    }

    
    return 0;
}