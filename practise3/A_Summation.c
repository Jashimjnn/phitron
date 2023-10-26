#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &ar[i]);
    }
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += ar[i];
    }
    if (sum < 0)
    {
        sum = (-1) * sum;
        printf("%lld\n", sum);
    }
    else
    {
        printf("%lld\n", sum);
    }
    return 0;
}