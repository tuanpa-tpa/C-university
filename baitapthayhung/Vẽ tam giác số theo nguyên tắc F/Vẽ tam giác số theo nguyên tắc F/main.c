//Viết chương trình C cho phép nhập vào chiều cao (số hàng) của tam giác và thực hiện in ra tam giác số theo nguyên tắc tương ứng.
//INPUT
//5
//OUTPUT
//1
//123
//12345
//1234567
//123456789
//  main.c
//  Vẽ tam giác số theo nguyên tắc F
//
//  Created by PAT on 6/5/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    for (int i = 0; i<n; i++){
        int d = 1;
        for (int j = 0; j<i*2+1; j++){
            printf("%d",d++);
        }
        printf("\n");
    }
    return 0;
}
