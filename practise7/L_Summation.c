#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
long long int fun(long long int ar[], long long int n)
{
    if (n <=0)
    {
        return 0;
    }
    
   return(fun(ar, n - 1) + ar[n - 1]);
}
int main()
{

    long long int n;
    scanf("%lld", &n);
    long long int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &ar[i]);
    }
    printf("%lld\n",fun(ar, n));

    return 0;
}