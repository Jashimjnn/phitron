#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        char str[n];
        scanf("%s",&str);
        int cntt=0;
        int cntp=0;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='T')
            {
                cntt++;
            }
            if(str[i]=='P')
            {
                cntp++;
            }
        }
        if(cntt>cntp)
        {
            printf("Tiger\n");
        }
        else if(cntt<cntp)
        {
            printf("Pathaan\n");
        }
        else
        {
            printf("Draw\n");
        }

    }
    
    return 0;
}