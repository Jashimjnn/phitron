#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<limits.h>
int main() 
{

    int n;
    scanf("%lld",&n);
    long long int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    long long int mi = INT_MAX;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(mi>a[i])
        {
            mi=a[i];
            //count++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(mi==a[i])
        {
            count++;
        }
    }
    if(count%2==0)
    {
        printf("Unlucky\n");
    }
    else
    {
        printf("Lucky\n");
    }
    
    return 0;
}