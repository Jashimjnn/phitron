#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

   int n,x,y;
   scanf("%d",&n);
   int ar[n];
   for(int i=0;i<n;i++)
   {
    scanf("%d",&ar[i]);
   }
   scanf("%d",&x);
   int flag=0;
   for(int i=0;i<n;i++)
   {
    if(ar[i]==x)
    {
        //printf("%d\n",ar[i]);
        y = i;
        flag++;
        break;

    }
   }
   if(flag)
   {
    printf("%d\n",y);
   }
   else
   {
    printf("-1\n");
   }
    return 0;
}