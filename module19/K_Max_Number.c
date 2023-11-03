#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
long long int fun(long long int ar[],int n,int i)
{
    if(i==n)
    {
        return  INT_MIN;
    }
    long long int mx = fun(ar,n,i+1);
    if(ar[i]>mx)
    {
        return ar[i];
    }
    else
    {
        return mx;
    }

}
int main() 
{

    int n;
    scanf("%d",&n);
    long long int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&ar[i]);
    }
    long long int ans = fun(ar,n,0);
    printf("%lld\n",ans);
    
    return 0;
}