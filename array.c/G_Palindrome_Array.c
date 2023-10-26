#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{

    long long int n;
    scanf("%lld", &n);
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {

        if (a[i] != a[n - 1 - i])
        {
            count = 1;
            break;
        }
    }
    if (count == 0)
    {
        printf("YES\n");
        // printf("NO\n");
    }
    else
    {
        printf("NO\n");
        // printf("YES\n");
    }

    return 0;
}