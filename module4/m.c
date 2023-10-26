
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char x;
    scanf("%c",&x);
    if(x>='A' && x<='Z')
    {
        printf("ALPHA\n");
        printf("IS CAPITAL\n");
    }
    else if(x>='a' && x<='z')
    {
        printf("ALPHA\n");
        printf("IS SMALL\n");
    }
    else 
    {
        printf("IS DIGIT\n");
    }
    
    return 0;
}