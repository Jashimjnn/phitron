#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d",&n);
    int even=0;
    int odd=0;
    for(int i=1;i<=n;i++)
    {
        int x;
        scanf("%d",&x);
        if(x>0)
        {
            even+=x;
        }
        if(x<0)
        {
            odd+=x;
        }
    }
    printf("%d %d",even,odd);
    
    return 0;
}