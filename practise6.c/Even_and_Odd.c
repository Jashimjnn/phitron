#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void odd_even()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int cnte = 0;
    int cnto = 0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] % 2 == 0)
        {
            cnte++;
        }
        else
        {
            cnto++;
        }
    }
    printf("%d %d\n", cnte, cnto);
}
int main()
{

    // int n;
    // scanf("%d", &n);
    // int ar[n];
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &ar[i]);
    // }
    odd_even();

    return 0;
}