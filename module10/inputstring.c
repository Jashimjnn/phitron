#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char a[100];
    //gets(a);
    fgets(a,16,stdin);
    printf("%s\n",a);
    
    return 0;
}