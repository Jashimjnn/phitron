#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char s[20];
    char s1[20];
    // gets(s);
    // gets(s1);
    scanf("%s%s",&s,&s1);
    char s2[20];
    strcpy(s2,s);
    int len1=strlen(s);
    int len2=strlen(s1);
    // char ch=s2[0];
    // s2[0]=s1[0];
    // s1[0]=ch; 
    printf("%d %d\n",len1,len2);
    printf("%s\n",strcat(s,s1));
    char ch=s2[0];
    s2[0]=s1[0];
    s1[0]=ch; 
    printf("%s %s\n",s2,s1);
    return 0;
}