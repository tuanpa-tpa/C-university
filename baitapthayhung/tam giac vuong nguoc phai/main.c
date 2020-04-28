// Viết chương trình C cho phép nhập vào chiều cao của tam giác và thực hiện in ra tam giác vuông sao ngược phải.
// INPUT
// 5
// OUTPUT
// *****
// ~****
// ~~***
// ~~~**
// ~~~~*

#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for (int i = 1; i<=n; i++)
        printf("*");
        printf("\n");
    for (int i = 1; i<=n-1; i++)
    {
        for (int j= 1 ; j<= i; j++)
            printf("~");
        for (int j = i+1; j<= n; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}