//Viết chương trình C cho phép nhập vào số hàng (chiều cao) của tam giác và thực hiện in ra tam giác số tương ứng theo nguyên tắc.
//INPUT
//5
//OUTPUT
//12345
//~1234
//~~123
//~~~12
//~~~~1
//  main.c
//  Vẽ tam giác số theo nguyên tăc C (4)
//
//  Created by PAT on 6/7/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    for (int i = 0; i<n; i++){
        int d =1;
        for (int j = 0; j<i; j++){
            printf("~");
        }
        for (int j = 0; j<n-i; j++){
            printf("%d",d++);
        }
        printf("\n");
    }
    return 0;
}
