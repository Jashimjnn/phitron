#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// return + no  parameter
int sum()
{
     int a,b;
     scanf("%d%d",&a,&b);
     int s = a+b;
     return s;
}
int main() 
{

    int ans=sum();
    printf("%d\n",ans);
    
    return 0;
}