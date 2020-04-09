#include <stdio.h>
#include <string.h>

int check(char xau[],int dau, int cuoi)
{
    for (int i = dau; i<= cuoi; i++)
        if ( xau[i] >= 97 && xau[i] <= 122)
            return 0;
    return 1;
}

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
    cuoi++;
    for (int i = dau+1; i<= cuoi; i++)
        xau2[i] = xau1[i-1];
        xau2[dau] = ' ';
    cuoi++;
    xau2[cuoi] = ' ';
    // 
    char xau3[200];
    for (int i = dau; i<= cuoi; i++)
        {
            if (xau2[i] == 32)
                {
                    int j =i+1;
                    while ( xau2[j] != 32 )
                        j++;
                    for (int h = i+1; h < j ;h++)
                        xau3[h] = xau2[h];
                    if (check(xau3,i+1,j-1) == 1)
                        {
                            for (int h = i+1 ; h < j;h++)
                                printf("%c",xau3[h]);
                                printf(" ");
                        }
                }
        }

return 0;
}
