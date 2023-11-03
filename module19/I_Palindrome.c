#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char ch[1001];
    scanf("%s",&ch);
    char st[1001];
    strcpy(st,ch);
    int i=0;
    int j=strlen(st)-1;
    while(i<j)
    {
        char tmp =  st[i];
        st[i] = st[j];
        st[j] = tmp;
        i++;
        j--;
    }
    if(strcmp(st,ch)==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    
    return 0;
}