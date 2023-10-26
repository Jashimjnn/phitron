#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int a,b;
    scanf("%d%d",&a,&b);
    int sub=a-b;
    if(sub>=0)
    {
        printf("%d\n",sub);
    }
    else
    printf("0\n");
    
    return 0;
}