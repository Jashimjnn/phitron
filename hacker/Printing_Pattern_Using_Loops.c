#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int findMax(int a, int b) {
    return a > b ? a : b;
}
int main() 
{

    int n;
    scanf("%d",&n);
    int k=n;
    for (int i = -n + 1; i < n; i++) 
    {
        for (int j = -n + 1; j < n; j++) 
        {
            printf("%d ", findMax(abs(i), abs(j)) + 1);
        }
        printf("\n");
    }
    
    return 0;
}