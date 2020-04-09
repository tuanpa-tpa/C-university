#include <stdio.h>

int main()
{
    int n,d,mang[11];
    scanf("%d",&n);
    for (int i =0; i<= 9; i++)
        mang[i] = 0;
    while (n > 0)
    {
        int t = n % 10;
        mang[t]++;
        n /= 10;
    }
    for (int i = 0; i<= 9; i++)
        if (mang[i] != 0)
            {
                printf("%d ",i);
                printf("%d\n",mang[i]);
            }
    return 0;

}