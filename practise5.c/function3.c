#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
char capital_to_small(char ch)
{
    char ch1 = ch+32;
    return ch1;
}
int main() 
{

    char ch;
    scanf("%c",&ch);
    char ans = capital_to_small(ch);
    printf("%c",ans);
    return 0;
}