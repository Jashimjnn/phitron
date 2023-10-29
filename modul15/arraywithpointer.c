#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int ar[5]={1,2,3,4,5};
    printf("0 index er address : %p\n",&ar[0]);
    printf("0 index er address : %p\n",ar);
    printf("0 index er value : %d\n",ar[0]);
    printf("0 index er value : %d\n",*ar);
    printf("0 index er value : %d\n",*(ar+1));
    printf("The array is : ");
    for(int i=0;i<5;i++)
    {
        printf("%d ",*(ar+i));
    }
    printf("\n");
    printf("The array is : ");
    for(int i=0;i<5;i++)
    {
        printf("%d ",i[ar]);
    }
    
    return 0;
}