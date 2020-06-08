//Viết chương trình C cho phép nhập vào chiều cao (số hàng) của tam giác và thực hiện in ra tam giác số theo nguyên tắc tương ứng. (Lưu ý sử dụng định dạng: %4d)
//INPUT
//5
//OUTPUT
//   1   2   4   7  11
//       3   5   8  12
//           6   9  13
//              10  14
//                  15
//  main.c
//  Vẽ tam giác số theo nguyên tắc K (3)
//
//  Created by PAT on 6/6/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,mang[100][100] = {0};
    int d =1;
    scanf("%d",&n);
    for (int i = 0; i< n; i++){
        for(int j = 0 ; j< i+1; j++){
            mang[j][i] = d++;
        }
    }
    for (int i = 0; i< n; i++){
        for(int j = 0 ; j< n; j++){
            if (mang[i][j] != 0){
                printf("%4d",mang[i][j]);
            }
            else printf("    ");
        }
        printf("\n");
    }
    return 0;
}
