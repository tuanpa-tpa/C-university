//Viết chương trình C cho phép nhập vào n là chiều cao( số hàng của tam giác). Thực hiện in ra tam giác tương ứng theo nguyên tắc.
//INPUT
//5
//OUTPUT
//~~~~1
//~~~22
//~~333
//~4444
//55555
//  main.c
//  Vẽ tam giác số theo nguyên tắc B (2)
//
//  Created by PAT on 6/7/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    int d = 1;
    for (int i =0; i<n; i++){
        int t =d;
        for (int j = 0; j< n-i-1; j++){
            printf("~");
        }
        for (int j = 0; j<i+1; j++){
            printf("%d",t);
        }
        d++;
        printf("\n");
    }
    return 0;
}
