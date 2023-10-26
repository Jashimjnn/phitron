#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char s[100000];
    gets(s);
    int len = strlen(s);
    for(int i=0;i<len;i++)
    {
        if(s[i]==',')
        {
            printf(" ");
        }
        else if(s[i]>='a' && s[i]<='z')
        {
            printf("%c",(s[i]-32));
        }
        else if(s[i]>='A' && s[i]<='Z')
        {
            printf("%c",(s[i]+32));
        }
    }
    
    return 0;
}