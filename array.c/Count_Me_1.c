#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    long long int n;
    scanf("%lld",&n);
    long long int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    long long int cnt2=0,cnt3=0,cnt=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0 && a[i]%3==0)
        {
            cnt++;
        }
        else if(a[i]%2==0)
        {
            cnt2++;
        }
        else if(a[i]%3==0)
        {
            cnt3++;
        }
    }
    long long int sum=cnt2+cnt;
    printf("%lld %lld",sum,cnt3);
    
    return 0;
}