#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//no return  + parameter
void sum(int a,int b)
{
    int sum=a+b;
    printf("%d\n",sum);
}
int main() 
{

    int a,b;
    scanf("%d%d",&a,&b);
    sum(a,b);
    
    return 0;
}