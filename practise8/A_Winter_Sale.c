#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    float x,p;
    scanf("%f%f",&x,&p);
    float ans = p*(100/(100-x));
    printf("%.2f\n",ans);
    
    return 0;
}