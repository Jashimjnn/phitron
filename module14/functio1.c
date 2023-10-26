#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// return + parameter
// int sum(int a,int b)
// {
//     int sum=a+b;
//     return sum;
// }
int sum(int a,int b);
int main() 
{

    int a,b;
    scanf("%d%d",&a,&b);
    int x=sum(a,b);
    printf("The sum : %d\n",x);
    
    return 0;
}
int sum(int a,int b)
{
    int sum=a+b;
    return sum;
}