//Viết chương trình C cho phép nhập vào mảng A gồm n phần tử số nguyên (n>2). Tìm giá trị lớn nhất, nhỏ nhất và vị trí của chúng trong mảng.(nếu có nhiều hơn 1 phần tử thỏa mãn thì in ra vị trí cuối cùng tìm thấy)
//Trong đó:
//INPUT
//- Dòng đầu tiên là số phần tử của mảng
//- Dòng thứ hai là các phần tử của mảng
//OUTPUT
//- Giá trị lớn nhất và vị trí
//- Giá trị nhỏ nhất và vị trí
//INPUT
//8
//9 1 2 1 18 16 5 9
//OUTPUT
//18 5
//1 4
//  main.c
//  Tìm giá trị lớn nhất và nhỏ nhất cùng vị trí xuất hiện của chúng
//
//  Created by PAT on 6/7/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,mang[200],min = 9999,max = 0,vtmax = 0,vtmin = 0;
    scanf("%d",&n);
    for (int i = 0; i<n; i++) {
        scanf("%d",&mang[i]);
    }
    for (int i = 0; i<n; i++) {
        if (mang[i] >= max){
            max = mang[i];
            vtmax = i;
        }
        if (mang[i] <= min){
            min = mang[i];
            vtmin = i;
        }
    }
    printf("%d %d\n",max,vtmax+1);
    printf("%d %d",min,vtmin+1);
    return 0;
}
