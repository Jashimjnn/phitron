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
    int x;
    scanf("%d",&x);
    // for(int i=0;i<n-1;i++)
    // {
    //     for(int j=i+1;j<n;j++)
    //     {
    //        if(ar[i]+ar[j]==x)
    //        {
    //         printf("YES\n");
    //         printf("%d %d",i,j);
    //         break;
    //        }
    //     }
    // }
    int flag=0;
     for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
           if(ar[i]+ar[j]==x)
           {
           flag=1;
            break;
           }
        }
    }
    if(flag==0)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
    
    return 0;
}