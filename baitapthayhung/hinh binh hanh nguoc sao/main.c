// Viết chương trình C cho phép nhập vào số hàng và cột  của hình bình hành. 
// Thực hiện in ra hình bình hành ngược
// INPUT
// 3 5
// OUTPUT
// *****
// ~*****
// ~~*****

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
        for (int j = 1; j <= i; j++)
            printf("~");
        for (int j = 1; j<= cot; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}