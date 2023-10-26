#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d",&n);
    int ev=0,od=0,po=0,ne=0;
    for(int i=1;i<=n;i++)
    {
        int x;
        scanf("%d",&x);
        if(x%2==0)
        {
            ev++;
        }
        else
        {
            od++;
        }
        if(x>0)
        {
            po++;
        }
        if(x<0)
        {
            ne++;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n",ev,od,po,ne);
    
    return 0;
}