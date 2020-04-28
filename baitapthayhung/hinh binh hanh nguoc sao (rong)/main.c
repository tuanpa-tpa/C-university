// Viết chương trình C cho phép nhập vào hàng và cột của hình bình hành. Thực hiện in hình bình hành sao.
// INPUT
// 3 4
// OUTPUT
// ****
// ~*..*
// ~~****

#include <stdio.h>

int main()
{
    int hang,cot;
    scanf("%d %d",&hang,&cot);
    for (int j = 1; j<= cot; j++)
        printf("*");
        printf("\n");
    for (int i = 1; i <= hang-1; i++)
    {
        int tam =0;
        for (int j = 1; j <= i; j++)
            printf("~");
        
        if (i < hang-1) for (int j = 1; j<= cot-i-1; j++)
            {

                if (j == 1) printf("*");
                tam = 1;
                printf(".");
                if (j == cot-i-1) printf("*");
            }
        else {
            for (int j = 1; j<= cot; j++)
                printf("*");
                tam = 1;
        }

        if (tam == 1) printf("\n");
    }
    // for (int i = 1; i<= cot - 2;i++)
    //     printf("~");
    // for (int i = 1; i<= cot ;i++)
    //     printf("*");
    return 0;
}