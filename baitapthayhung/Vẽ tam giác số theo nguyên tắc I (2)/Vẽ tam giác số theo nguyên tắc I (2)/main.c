//Viết chương trình C cho phép nhập vào chiều cao (số hàng) của tam giác và thực hiện in ra tam giác tương ứng.
//(Lưu ý mỗi số ở output cách nhau một khoảng trắng)
//INPUT
//5
//OUTPUT
//1
//2 4
//7 11 16
//22 29 37 46
//56 67 79 92 106
//  main.c
//  Vẽ tam giác số theo nguyên tắc I (2)
//
//  Created by PAT on 5/9/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    long d1 =0,d2 =1;
    for (int i =1; i<=n ;i++){
        for (int j =1; j<= i;j++){
            d2 = d1+d2;
            d1 ++;
            printf("%ld ",d2);
        }
        printf("\n");
    }
    return 0;
}
