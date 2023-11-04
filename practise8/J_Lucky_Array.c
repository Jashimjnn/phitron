#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main()
{

    long long int n;
    scanf("%lld", &n);
    long long int ar[n];
    long long int mi = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &ar[i]);
        if (ar[i] < mi)
        {
            mi = ar[i];
        }
    }
    long long int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == mi)
        {
            cnt++;
        }
    }
    if (cnt % 2 != 0)
    {
        printf("Lucky\n");
    }
    else
    {
        printf("Unlucky\n");
    }

    return 0;
}