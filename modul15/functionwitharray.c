#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void fun(int ar[],int sz)
{
    for(int i=0;i<sz;i++)
    {
        printf("%d ",ar[i]);
    }
}
int main() 
{

    int ar[5]={1,2,3,4,5};
    int sz = sizeof(ar)/sizeof(int);
    printf("size is : %d\n",sz);
    fun(ar,sz);
    
    return 0;
}