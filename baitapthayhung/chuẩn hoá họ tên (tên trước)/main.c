#include <stdio.h>
#include <string.h>

int main()
{
    char xau1[200],xau2[200];
    gets(xau1);
    // xoa khoang cach
    int leng1 = strlen(xau1);
    for (int i = 0; i<leng1; i++)
        if (xau1[i] == ' ' && xau1[i+1] == ' ')
            {
                for ( int j = i; j < leng1; j++)
                    xau1[j] = xau1[j+1];
                i--;
                leng1--;
            }
    int dau = 0, cuoi = leng1-1;
    if (xau1[dau] == ' ') dau++;
    if (xau1[cuoi] == ' ') cuoi--;
    // xu ly bai toan
    int d = 0;
    for (int i = cuoi; i>= dau; i--)
        {
            if (xau1[i] == ' ')
                break;
            d++;
        }
    // them dau phay
    for (int i = dau+1; i<= cuoi+1; i++)
        xau2[i] = xau1[i-1];
        xau2[dau] = ' ';
    // xuat ra ten
    for (int i = cuoi - d + 1; i <= cuoi; i++)
        if (xau1[i] >= 97 && xau1[i] <= 122)
                xau1[i] = xau1[i] - 32;
    for (int i = cuoi - d + 1; i <= cuoi; i++)
        printf("%c",xau1[i]);
    printf(", ");
    // in hoa
    for (int j = dau;j < cuoi-d ;j++)
        {
            if (xau2[j] == 32)
                {
                    if (xau2[j+1] >= 97 && xau2[j+1] <= 122)
                    {
                        xau2[j+1] = xau2[j+1] - 32;
                    }
                }
            else
            if (xau2[j+1] >= 65 && xau2[j+1] <= 90)
                xau2[j+1] = xau2[j+1] + 32;
            printf("%c",xau2[j+1]);
        }
       
    return 0;

}