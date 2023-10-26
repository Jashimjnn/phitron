#include <stdio.h>
int main()
{
    int num = 5;
    if (num > 10)
    {
        printf("Greater than 10");
    }
    else if (num < 10)
    {
        printf("Less than 10\n");
    }
    else
    {
        printf("Equal to 10");
    }
    char ch;
    ch  = 'z';
    printf("%d",ch);
    //printf("%d",convert(ch));
    return 0;
}