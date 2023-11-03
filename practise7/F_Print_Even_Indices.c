#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void fun(long long int ar[], long long int n, long long int i)
{
    if (i < 0)
    {
        return;
    }
    if (i % 2 == 0)
    {
        printf("%lld ", ar[i]);
    }
    fun(ar,n,i - 1);
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
    fun(ar, n, n-1);

    return 0;
}