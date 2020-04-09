#include <stdio.h>
#include <math.h>
int kt(int n)
{
    int dem = 0,tong = 0,mang[100],tam = n;
    while (n > 0)
    {
        mang[dem] = n % 10;
        dem++;
        n /= 10;
    }
    for (int i = 0;i < dem; i++)
        tong += pow(mang[i],dem);
    if (tong == tam)
        return 1;
    return 0;
}

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if (a > b)
    {
        int tmp = a;
        a = b; 
        b = tmp;
    }
    for (int i = a; i<=b;i++)
        if (kt(i) == 1)
      printf("%d ",i);
    return 0;

}