#include <stdio.h>
#include <string.h>

int main()
{
    char xau[200];
    int l,dem;
    gets(xau);
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
    for (int i = d; i <= c ; i++)
        if (xau[i] == ' ')
            dem++;
    printf("%d",dem+1);
    return 0;
}