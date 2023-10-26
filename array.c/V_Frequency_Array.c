#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n,m;
    scanf("%d%d",&n,&m);
    int a[n];
   
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int cnt[m+1];
    for(int i=0;i<m+1;i++)
    {
        cnt[i]=0;
    }
    for(int i=0;i<n;i++)
    {
         cnt[a[i]]++;
    }
    for(int i=1;i<=m;i++)
    {
        //  if(cnt[i]>0)
        //  {
            printf("%d\n",cnt[i]);
       // }
    }
    
    return 0;
}