#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<stdbool.h>
int main() 
{

    int t;
    scanf("%d",&t);
    bool flag=false;
    while(t--)
    {
        char s[100000];
        scanf("%s",&s);
        for(int i=0;i<strlen(s);i++)
        {
            if(s[i]== 101 || s[i]== 010)
            {
                flag=true;
            }
        }
        if(flag==true)
        {
            printf("Good\n");
        }
        else
        {
            printf("Bad\n");
        }
    }
    
    return 0;
}