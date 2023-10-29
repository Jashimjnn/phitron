#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int my_abs(int n)
{
    int x = abs(n);
    return x;
}
int main() 
{

    int n;
    scanf("%d",&n);
    int ans = my_abs(n);
    printf("%d\n",ans);
    
    return 0;
}