#include <stdio.h>
#include <math.h>
#include<string.h>
int main()
{
    char chuoi[200];
    gets(chuoi);
    int l = strlen(chuoi);
    for (int i = 0; i<l-1;i++)
        if (chuoi[i] == 32 && chuoi[i+1] == 32)
            {
                for (int j =i; j < l;j++)
                    chuoi[j] = chuoi[j+1];
                i--;
                l--;
            }
    int dau = 0,cuoi = l-1;
    if (chuoi[0] == 32) dau ++;
    if (chuoi[cuoi] == 32) cuoi--;
    // chuyen hoa thanh thuong
    for (int i = dau; i<= cuoi;i++)
        if (chuoi[i] >= 65 && chuoi[i] <= 90)
            chuoi[i] = chuoi[i] + 32;
    // chưa có cách giải
    return 0;
}