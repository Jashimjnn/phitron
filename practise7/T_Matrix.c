#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d",&n);
    int sum1=0;
    int sum2=0;
    int ar[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                sum1+=ar[i][j];
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        sum2+=ar[i][n-1-i];
    }
    int ans = abs(sum1-sum2);
    printf("%d\n",ans);
    
    return 0;
}