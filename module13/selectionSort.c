#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ar[j]<ar[i])
            {
                int tmp=ar[j];
                ar[j]=ar[i];
                ar[i]=tmp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }
    
    return 0;
}