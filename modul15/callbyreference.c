#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void fun(int *p)
{
    printf("fun er x address : %p\n",p);
    printf("p er value : %d\n",*p);
    *p=50;
    printf("p er value : %d\n",*p);
}
int main() 
{

    int x=10;
    printf("main er x address : %p\n",&x);
    fun(&x);
    printf("x er value : %d\n",x);
    
    return 0;
}