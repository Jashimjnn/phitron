#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int is_palindrome(char *str)
{
    int flag=1;
    int len=strlen(str);
    for(int i=0,j=len-1;i<len/2;i++,j--)
    {
        if(str[i]!=str[j]){
            flag=0;break;
        }
    }
    return flag;
}
int main() 
{

    char str[1001];
    scanf("%s",&str);
    int ans = is_palindrome(str);
    if(ans==1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
    
    return 0;
}