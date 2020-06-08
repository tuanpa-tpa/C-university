#include<stdio.h>
#include<string.h>
int main()
{
    int l,d1,d2,d3;
    char chuoi[200];
    gets(chuoi);
    l = strlen(chuoi);
    char chuoi2[l];
    for (int i = 0; i< l;i++)
        if (chuoi[i] >= 65 && chuoi[i] <= 90)
            chuoi[i] = chuoi[i] + 32;
        else if (chuoi[i] >= 97 && chuoi[i] <= 122)
            chuoi[i] = chuoi[i] - 32;
    puts(chuoi);
    return 0;
}
