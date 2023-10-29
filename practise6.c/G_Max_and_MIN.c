#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<limits.h>
void display(int ar[],int n)
{
    int ma = INT_MIN;
    int mi = INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(ar[i]>ma)
        {
            ma=ar[i];
        }
        if(ar[i]<mi)
        {
            mi=ar[i];
        }
    }
    printf("%d %d\n",mi,ma);
}
int main() 
{

    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    display(ar,n);
    
    return 0;
}