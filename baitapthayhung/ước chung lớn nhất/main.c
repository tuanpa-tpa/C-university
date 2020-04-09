#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,t;
    scanf("%d%d",&a,&b);
    if (a < b)
        {
            int t = a;
            a = b;
            b = t;
        }
    while ( b != 0)
        {
            int tmp = a % b;
            a = b;
            b = tmp;
        }
    printf("%d",a);
    return 0;
}