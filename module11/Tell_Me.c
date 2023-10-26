#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<stdbool.h>
int main() 
{

    long  long int t;
    scanf("%lld",&t);
    while(t--)
    {
        long  long int n;
        scanf("%lld",&n);
        long long int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        }
        long long int x;
        scanf("%lld",&x);
        bool flag=false;
        for(int i=0;i<n;i++)
        {
            if(a[i]==x)
            {
                flag=true;
            }
        }
        if(flag==true)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    
    return 0;
}