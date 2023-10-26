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
        int m1,m2,d;
        scanf("%d%d%d",&m1,&m2,&d);
        int sum = (m1+m2);
        int ans = (d*m1)/sum;
        int x = d-ans;
        printf("%d\n",x);
    }
    
    return 0;
}