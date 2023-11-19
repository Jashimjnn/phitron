#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char str[1001];
    scanf("%s",&str);
    int cnt=0;
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u')
        {
            cnt++;
        }
    }
    printf("%d",cnt);
    
    return 0;
}