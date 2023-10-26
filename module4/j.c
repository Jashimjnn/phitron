#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int a,b;
    scanf("%d%d",&a,&b);
    if(a<b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    if(a%b==0)
    {
        printf("Multiples\n");
    }
    else
    {
        printf("No Multiples\n");
    }
    
    return 0;
}