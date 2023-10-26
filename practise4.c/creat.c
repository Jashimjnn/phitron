#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char s[1000];
    char t[1000];
    scanf("%s",&s);
    scanf("%s",&t);
    int lens=strlen(s);
    int lent=strlen(t);
    printf("%d %d\n",lens,lent);
    printf("%s %s\n",s,t);
    
    return 0;
}