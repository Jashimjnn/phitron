#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char s[1000];
    gets(s);
    
    char s1[1000];
    strcpy(s1,s);
    int d = strcmp(s1,strrev(s));
    if(d==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    
    return 0;
}