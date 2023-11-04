#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() 
{

     int n,k;
    scanf("%d%d",&n,&k);
    long long int ar[n+1];
    for(int i=1;i<=n;i++)
    {
        scanf("%lld",&ar[i]);
    }
    for(int i=1;i<=n-1;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(ar[i]<ar[j])
            {
                long long int tmp = ar[i];
                ar[i] = ar[j];
                ar[j] = tmp;
            }
        }
    }
    long long int sum=0,mx=0;
    for(int i=1;i<=k;i++)
    {
        sum+=(ar[i]);
        mx=fmax(mx,sum);
        
    }
   printf("%lld\n",mx);
    
    return 0;
}