#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for (int i = 1; i<=n ; i++)
        printf("*");
        printf("\n");
    for (int i = 1; i<=n ; i++)
    {
        int tam =0;
        for (int j = 1 ;j <=n-i-2; j++)
            {
                if (j == 1) printf("*");
                printf(".");
                if (j == n-i-2) printf("*");
                tam = 1;
            }
        if (tam ==1 )printf("\n");
    }
    printf("**\n");;
    printf("*");
    return 0;
}