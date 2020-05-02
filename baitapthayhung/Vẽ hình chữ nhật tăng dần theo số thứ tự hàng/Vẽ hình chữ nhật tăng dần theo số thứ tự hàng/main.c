//Viết chương trình C cho phép nhập vào số hàng và số cột của hình chữ nhật. In ra hình chữ nhật tăng dần theo số thứ tự hàng tương ứng.
//INTPUT
//5 4
//OUTPUT
//1234
//2345
//3456
//4567
//5678
//  main.c
//  Vẽ hình chữ nhật tăng dần theo số thứ tự hàng
//
//  Created by PAT on 5/2/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int hang,cot;
    scanf("%d %d",&hang,&cot);
    for (int i = 1; i<= hang; i++){
        for (int j = 1; j<= cot; j++){
            printf("%d",j+i-1);
        }
        printf("\n");
    }
    return 0;
}
