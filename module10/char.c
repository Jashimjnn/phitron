#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char a[5];
    for(int i=0;i<5;i++)
    {
        scanf("%c",&a[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("%c\n",a[i]);
    }
    printf("%d",sizeof(a)/sizeof(char));
    
    return 0;
}