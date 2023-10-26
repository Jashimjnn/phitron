#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char s[1000000];
    gets(s);
    int len=strlen(s);
    int sum=0;
    for(int i=0;i<len;i++)
    {
      sum+=(s[i]-'0');
    }
    printf("%d\n",sum);
    
    return 0;
}