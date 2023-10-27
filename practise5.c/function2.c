#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
char small_to_capital(char ch)
{
    char ch1 = ch-32;
    return ch1;
}
int main() 
{

    char ch;
    scanf("%c",&ch);
    char ans = small_to_capital(ch);
    printf("%c",ans);
    return 0;
}