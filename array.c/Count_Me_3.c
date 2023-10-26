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
        char  str[10000];
        scanf("%s",&str);
        int cntsm=0,cntcp=0,cntdg=0;
        for(int i=0;i<strlen(str);i++)
        {
            if(str[i]>='a' && str[i]<='z')
            {
              cntsm++;
            }
            else if(str[i]>='A' && str[i]<='Z')
            {
                cntcp++;
            }
            else if(str[i]>='0' && str[i]<='9')
            {
                cntdg++;
            }
        }
        printf("%d %d %d\n",cntcp,cntsm,cntdg);
    }
    
    return 0;
}