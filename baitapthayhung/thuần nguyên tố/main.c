#include <stdio.h>
#include <math.h>

int check(int n);
int tong(int n);

int main()
{
    int a,b,d=0;
    scanf("%d%d",&a,&b);
    if (a > b)
        {
            int t = a;
            a=b;
            b = t;
        }
    for (int i = a; i<= b; i++)
        if (tong(i) == 1 && check(i) == 1)
            d++;
        printf("%d ",d);
    return 0;
}
int tong(int n)
{
    int tong = 0, temp, kt = 1;
    while (n > 0)
    {
        tong += n % 10;
        temp = n % 10;
        if (temp != 2 && temp != 3 && temp != 5 && temp != 7)
                kt = 0;
        n /= 10;
    }
    if (check(tong) == 1 && kt == 1)
        return 1;
    return 0;
}

int check(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}