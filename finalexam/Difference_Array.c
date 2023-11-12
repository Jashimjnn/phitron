#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int t;
    scanf("%d",&t);
    while(t--)
    {
        int  n;
        scanf("%d",&n);
        int  ar[n],b[n],c[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&ar[i]);
            b[i]=ar[i];
        }
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(b[i]>b[j])
                {
                    int tmp = b[i];
                    b[i] = b[j];
                    b[j] = tmp;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            c[i] = abs(ar[i]-b[i]);
        }
        for(int i=0;i<n;i++)
        {
            printf("%d ",c[i]);
        }
        printf("\n");
    }
    
    return 0;
}