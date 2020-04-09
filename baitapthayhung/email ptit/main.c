#include <stdio.h>
#include <string.h>

int main()
{
    char xau[200];
    int l,dem;
    gets(xau);
    // xoa khoang trang
    l = strlen(xau);
    for (int i = 0; i < l;i++)  
        {
            if(xau[i] == ' ' && xau[i+1] == ' ')
                {
                    for (int j = i ; j < l; j++)
                        xau[j] = xau[j+1];
                
                   i--;
                   l--;
                }
        }
    int d = 0, c = l-1;
    if (xau[d] == ' ') d++;
    if (xau[c] == ' ') c--;

    // cat ghep
    int tam = c+1;
    char xau1[200],xau2[200];
    
    xau2[0] = ' ';
    for (int i = 1; i<= l;i++)
        xau2[i] = xau[i-1];
        
        
    while (xau2[tam] != ' ')
        tam --;

        
    int de = 0;    
    for (int i = tam+1 ; i <= c+1;i++)
        {
            xau1[de] = xau2[i];
            de++;
        }
    de--;
    
    for (int i = 0; i< tam;i++)
        {
            if (xau2[i] == ' ')
                {
                    de++;
                    xau1[de] = xau2[i+1];
                }
        }

    // chyen hoa thanh thuong
    int leng = strlen(xau1);
    for (int i = 0; i< leng; i++)
        if (xau1[i] >= 65 && xau1[i] <= 90)
            xau1[i] = xau1[i] + 32;
    for (int i = 0 ;i< strlen(xau1);i++)
        printf("%c",xau1[i]);
    printf("@ptit.edu.vn");
    return 0;
}