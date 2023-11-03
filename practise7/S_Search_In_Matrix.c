#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n, m;
    long long int sum = 0;
    scanf("%d%d", &n, &m);
    long long int ar[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%lld", &ar[i][j]);
        }
    }
    long long int x;
    scanf("%lld", &x);
    int flag=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(ar[i][j]==x)
            {
                flag=1;
                break;
            }
        }
    }
    if (flag==0)
    {
        printf("will take number\n");
    }
    else
    {
        printf("will not take number\n");
    }
    return 0;
}