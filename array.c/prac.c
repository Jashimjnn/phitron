#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
int main()
{

    int n;
    scanf("%d", &n);
    int ar[n];
    int mx = INT_MIN;
    int mi = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (mx < ar[i])
        {
            mx = ar[i];
        }
        if (mi > ar[i])
        {
            mi = ar[i];
        }
    }
    printf("%d %d", mx, mi);

    return 0;
}