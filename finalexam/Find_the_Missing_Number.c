#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    long long int t;
    scanf("%lld",&t);
    for(int i=1;i<=t;i++)
    {
        long long int m,a,b,c,x,z;
        scanf("%lld%lld%lld%lld",&m,&a,&b,&c);
         x = a*b*c;
        z = m/x;
        // float y =  (float)m/x;
        // if(y==z)
        // {
        //    printf("%lld\n",z);
        // }
        // else if(a==0 || b==0 || c==0)
        // {
        //     printf("0\n");
        // }
        if(m%x==0)
        {
            printf("%lld\n",z);
        }
        else
        {
            printf("-1\n");
        }
    }
    
    return 0;
}