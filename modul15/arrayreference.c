#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void fun(int ar[],int n)
{
    ar[0]=100;
}
int main() 
{

    int ar[5]={1,2,3,4,5};
    fun(ar,5);
    for(int i=0;i<5;i++)
    {
        printf("%d ",ar[i]);
    }
    
    return 0;
}