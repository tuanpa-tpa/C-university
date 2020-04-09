#include <stdio.h>
#include <math.h>
#include<string.h>
int main()
{
    char chuoi[200];
    gets(chuoi);
    // xoa bo khoang trang
    int l = strlen(chuoi);
    for (int i = 0; i<l;i++)
        if (chuoi[i] == 32)
            {
                for (int j =i; j < l-1;j++)
                    chuoi[j] = chuoi[j+1];
                i--;
                l--;
            }
    // chuyen hoa thanh thuong
    for (int i = 0; i<l;i++)
        if (chuoi[i] >= 65 && chuoi[i] <= 90)
            chuoi[i] = chuoi[i] + 32;
    // dem so chu xuat hien nhieu nhat 
    int max =0,mang[200];
    char chu = 0;
    for (int i = 65;i<=122;i++)
        mang[i] = 0;
    for (int i = 0; i<l;i++)
        mang[chuoi[i]]++;
    for (int i = 65;i<= 122;i++)
        if (mang[i] > max)
            {
                max = mang[i];
                chu = i;    
            }
    printf("%c %d",chu,max);
    return 0;
}