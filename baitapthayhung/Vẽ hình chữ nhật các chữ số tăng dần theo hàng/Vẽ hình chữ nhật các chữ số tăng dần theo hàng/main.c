//Viết chương trình C cho phép nhập vào số hàng và số cột của hình chữ nhật và in ra hình chữ nhật các chữ số tăng dần theo hàng tương ứng.
//(Lưu ý các giá trị được in liền nhau, không bao gồm khoảng trắng)
//INTPUT
//5 3
//OUPUT
//123
//456
//789
//101112
//131415
//  main.c
//  Vẽ hình chữ nhật các chữ số tăng dần theo hàng
//
//  Created by PAT on 5/6/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int hang,cot,index = 1;
    scanf("%d %d",&hang,&cot);
    for (int i = 1; i<= hang; i++){
        for (int j = 1; j<= cot; j++){
            printf("%d",index++);
        }
        printf("\n");
    }
    return 0;
}
