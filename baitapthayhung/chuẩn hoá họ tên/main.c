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
    char xau3[200];
    for (int i = dau; i <= cuoi; i++)
        {
            if (xau1[i] == ' ')
                break;
            d++;
            xau3[i] = xau1[i];
        }
    for (int j = d;j < cuoi;j++)
        {
            if (xau1[j] == 32)
                {
                    if (xau1[j+1] >= 97 && xau1[j+1] <= 122)
                    {
                        xau1[j+1] = xau1[j+1] - 32;
                    }
                }
            else
            if (xau1[j+1] >= 65 && xau1[j+1] <= 90)
                xau1[j+1] = xau1[j+1] + 32;
            printf("%c",xau1[j+1]);
        }
    printf(", ");
    for (int j = 0; j < strlen(xau3); j++)
        if (xau3[j] >= 97 && xau3[j] <= 122)
                xau3[j] = xau3[j] - 32;
    puts(xau3);
    return 0;

}