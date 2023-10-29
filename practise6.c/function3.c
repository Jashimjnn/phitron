#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void change_it(int ar[],int n)
{
    //int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(ar[i]==ar[n-1])
        {
            ar[i]=100;
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }
    printf("\n");
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
    change_it(ar,n);
   //printf("%d\n",ans);
    
    return 0;
}