#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    double x=5.26;
    double *ptr = &x;
    printf("x er value : %0.2lf\n",x);
    printf("x er value : %0.2lf\n",*ptr);
    printf("ptr er size : %d\n",sizeof(ptr));
    *ptr=10.20;
    printf("x er value : %0.2lf\n",x);
    printf("x er value : %0.2lf\n",*ptr);
    
    return 0;
}