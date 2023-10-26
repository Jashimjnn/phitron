#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int x=10;
    printf("%p\n",&x);
    // address raka;
    int *p = &x;
    printf("%p\n",p);
    //dereference
    printf("%d\n",*p);
    //value change;
    *p = 500;
    printf("%d\n",x);
    
    return 0;
}