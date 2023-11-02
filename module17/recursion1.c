#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void fun(int i)
{
    if(i==0)
    {
        return;
    }
    printf("%d ",i);
    fun(i-1);
}
int main() 
{
    
    fun(5);
    
    return 0;
}