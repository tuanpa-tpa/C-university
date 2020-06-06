//Viết chương trình C cho phép nhập vào n là cạnh của hình vuông. Thực hiện in ra hình vuông số theo nguyên tắc tương ứng.
//INPUT
//4
//OUTPUT
//4444444
//4333334
//4322234
//4321234
//4322234
//4333334
//4444444
//  main.c
//  Vẽ hình vuông theo nguyên tắc E
//
//  Created by PAT on 6/5/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

#define max 100
void print(int a[][max], int size)
{
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
}
void innerPattern(int n) {
int size = 2 * n - 1;
int front = 0;
int back = size - 1;
int a[max][max];
while (n != 0)
{
    for (int i = front; i <= back; i++) {
        for (int j = front; j <= back; j++) {
            if (i == front || i == back ||
                j == front || j == back)
                    a[i][j] = n;
        }
    }
    ++front;
    --back;
    --n;
}
    print(a, size);
}
int main()
{
    int n ;
    scanf("%d",&n);
    innerPattern(n);
    return 0;
}
