#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    while (scanf("%d", &n) != EOF)
    {
        // kaj
        if (n == 1999)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}
//While(scanf("%d",&n) != EOF)