//Viết chương trình C cho phép nhập vào chiều cao (số hàng) của tam giác và thực hiện in ra tam giác tương ứng.
//(Lưu ý mỗi số ở output cách nhau một khoảng trắng)
//INPUT
//4
//OUTPUT
//1
//3 2
//4 5 6
//10 9 8 7
//  main.c
//  Vẽ tam giác số theo nguyên tắc L
//
//  Created by PAT on 6/6/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    int d =1;
    for (int i= 0; i< n; i++){
        if (i % 2 == 0){
            for (int j = 0; j < i+1; j++){
                printf("%d ",d++);
            }
        } else {
            int temp = d+i;
            d += i;
            for (int j = 0; j< i+1; j++){
                printf("%d ",d--);
            }
            d = temp+1;
        }
        printf("\n");
    }
    return 0;
}
