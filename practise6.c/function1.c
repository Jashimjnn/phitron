#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int my_len(char *ch)
{
    int cnt = 0;
    for (int i = 0;; i++)
    {
        cnt++;
        if (ch[i] == '\0')
        {
            break;
        }
    }
    return cnt-1;
}
int main()
{

    char ch[100];
    scanf("%s", &ch);
    int ans = my_len(ch);
    printf("%d\n", ans);

    return 0;
}