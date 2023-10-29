#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void fun(char *ar)
{
    int szz = sizeof(ar)/sizeof(char);
    printf("size is : %d\n",szz);
}
int main() 
{

    char ar[]="hello";
    
    fun(ar);
    
    return 0;
}