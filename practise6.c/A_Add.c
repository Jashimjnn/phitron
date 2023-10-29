#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int sum(int a,int b)
{
    int sum1 = a+b;
    return sum1;
}

int main() 
{

    int x,y;
    scanf("%d%d",&x,&y);
    int ans = sum(x,y);
    printf("%d\n",ans);
    
    return 0;
}