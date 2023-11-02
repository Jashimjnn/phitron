#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void word()
{
    printf("word\n");
}
void hello()
{
    printf("Hello\n");
    word();
}
int main() 
{
    printf("main\n");
    hello();
    printf("end\n");
    
    return 0;
}