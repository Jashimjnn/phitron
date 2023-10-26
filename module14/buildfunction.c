#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    double x;
    scanf("%lf",&x);
    int c = ceil(x);
    printf("%d\n",c);
    int f = floor(x);
    printf("%d\n",f);
    int r = round(x);
    printf("%d\n",r);
    int y;
    scanf("%d",&y);
    int s = sqrt(y);
    printf("%d\n",s);
    int a,b;
    scanf("%d%d",&a,&b);
    int p = pow(a,b);
    printf("%d\n",p);
    int z;
    scanf("%d",&z);
    int ab=abs(z);
    printf("%d\n",ab);
    return 0;
}