#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void fun(long long int n)
{
    if(n%2!=0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}
int main() 
{

    long long  int n;
    scanf("%lld",&n);
    fun(n);
    
    return 0;
}