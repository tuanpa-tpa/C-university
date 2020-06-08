//Viết chương trình C cho phép nhập vào chiều cao (số hàng) của tam giác và thực hiện in ra tam giác tương ứng.
//INPUT
//4
//OUTPUT
//1
//23
//456
//78910
//  main.c
//  Vẽ tam giác số theo nguyên tắc I
//
//  Created by PAT on 6/7/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    int d =1;
    for (int i = 0; i<n; i++) {
        for (int j=0; j< i+1; j++){
            printf("%d",d++);
        }
        printf("\n");
    }
    return 0;
}
