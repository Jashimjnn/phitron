#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char str[10000];
    scanf("%s",&str);
    char cnt[26] = {0};
    for(int i=0;i<strlen(str);i++)
    {
       cnt[str-'a']++;
    }
    for(char i='a';i<='z';i++)
    {
        if(cnt[i-'a']!=0)
        {
            printf("%c : %d\n",i,cnt[i-'a']);
        }
    }
    // for (int i = 0; i < strlen(s); i++)
    // {
    //     int val = s[i] - 'a';
    //     cnt[val]++;
    // }
    //  for(int i=0;i<26;i++)
    //  {
    //      if(cnt[i]!=0)
    //      {
    //          printf("%c : %d\n",i+'a',cnt[i]);
    //      }
    //  }
    // for (int i = 0; i < strlen(s); i++)
    // {
    //     int val = s[i] - 'a';
    //     if (cnt[val] != 0)
    //     {
    //         printf("%c : %d\n", val + 'a', cnt[val]);
    //     }
    //     cnt[val] = 0;
    // }

    return 0;
}