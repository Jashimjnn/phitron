#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char a[200],b[100];
    scanf("%s%s",&a,&b);
    int len = strlen(a);
    for(int i=0;i<strlen(b);i++)
    {
        a[len+i]=b[i];
    }
    printf("%s\n",a);
    
    return 0;
}