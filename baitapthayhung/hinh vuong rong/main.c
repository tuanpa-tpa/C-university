// Viết chương trình C cho phép nhập vào n là cạnh của hình vuông và thực hiện in ra hình vuông rỗng các ký tự *.
// INPUT
// 4
// OUTPUT
// ****
// *..*
// *..*
// ****

#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for (int i = 1; i<= n; i++)
        printf("*");
        printf("\n");
    for (int j = 1; j<= n-2; j++)
    {
        for (int i = 1; i<= n-2; i++)
            {
                if (i == 1) printf("*");
                printf(".");
                if (i == n-2) printf("*");
            }
        printf("\n");
    }

    for (int i = 1; i<= n; i++)
        printf("*");
    return 0;
}