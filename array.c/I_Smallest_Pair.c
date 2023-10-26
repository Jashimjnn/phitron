#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<limits.h>
int main() 
{

    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n;
        scanf("%lld",&n);
        long long int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        }
        long long int mi = INT_MAX;
        int sum;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                sum = a[i] +a[j] + (j+1) - (i+1);
                if(sum<mi)
                 mi = sum;
 
                 sum=0;
            }
        }
        printf("%lld\n",mi);
    }
    
    return 0;
}