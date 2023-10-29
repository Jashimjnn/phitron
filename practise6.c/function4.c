#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int swap_it(int *x,int *y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}
int main() 
{

    int a,b;
    scanf("%d%d",&a,&b);
    swap_it(&a,&b);
    printf("%d %d\n",a,b);
    
    return 0;
}