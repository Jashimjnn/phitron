
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    long long int a,b,c,x,y;
    scanf("%lld%lld%lld",&a,&b,&c);
    if(a>=b && a>=c)
    {
     x=a;
    }
    if(b>=a && b>=c)
    {
     x=b;
    }
    if(c>=a && c>=b)
    {
     x=c;
    }

    if(a<=b && a<=c)
    {
     y=a;
    }
    if(b<=a && b<=c)
    {
     y=b;
    }
    if(c<=a && c<=b)
    {
     y=c;
    }
    printf("%lld %lld\n",y,x);
    
    return 0;
}