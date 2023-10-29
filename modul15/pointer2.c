#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void func(int x)
{
   printf("fun x er address : %p\n",&x);
}
int main() 
{

    //call by value;
    int x=10;
    printf("main x er address : %p\n",&x);
    func(x);
    
    return 0;
}