#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int ar[3];
    for(int i=0;i<3;i++)
    {
        scanf("%d",&ar[i]);
    }
    int ar1[3];
    for(int i=0;i<3;i++)
    {
        ar1[i]=ar[i];
    }
    for(int i=0;i<2;i++)
    {
        for(int j=i+1;j<3;j++)
        {
            if(ar[j]<ar[i])
            {
                int tmp=ar[j];
                ar[j]=ar[i];
                ar[i]=tmp;
            }
        }
    }
    for(int i=0;i<3;i++)
    {
        printf("%d\n",ar[i]);
    }
    printf("\n");
     for(int i=0;i<3;i++)
    {
        printf("%d\n",ar1[i]);
    }
    
    return 0;
}