#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int fun(char *ch,int i)
{
    if(ch[i]=='\0')
    {
        return 0;
    }
    int l = fun(ch,i+1);
    return l+1;
}
int main() 
{

    char ch[6]="hello";
    int length = fun(ch,0);
    printf("%d",length);
    
    return 0;
}