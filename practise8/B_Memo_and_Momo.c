#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    long long int a,b,k;
    scanf("%lld%lld%lld",&a,&b,&k);
    if(a%k==0 && b%k==0)
    {
        printf("Both\n");
    }
    else if(a%k==0 && b%k!=0)
    {
        printf("Memo\n");
    }
    else if(a%k!=0 && b%k==0)
    {
        printf("Momo\n");
    }
    else
    {
        printf("No One\n");
    }
    
    return 0;
}