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
    int count=1;
    while(count<n)
    {
        for(int i=0;i<n-count;i++)
        {
            if(ar[i]>ar[i+1])
            {
                int tmp=ar[i];
                ar[i]=ar[i+1];
                ar[i+1]=tmp;
            }
        }
        count++;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }
    
    return 0;
}