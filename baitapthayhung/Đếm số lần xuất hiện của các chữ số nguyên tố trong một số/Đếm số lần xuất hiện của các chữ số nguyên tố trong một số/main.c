//Viết chương trình C cho phép nhập vào một số n, thực hiện đếm số lần xuất hiện của các chữ số nguyên tố trong n và in ra màn hình. (Liệt kê theo thứ tự xuất hiện các chữ số)
//INPUT
//112345
//OUTPUT
//2 1
//3 1
//5 1
//  main.c
//  Đếm số lần xuất hiện của các chữ số nguyên tố trong một số
//
//  Created by PAT on 6/7/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int nt(int n){
    if (n < 2) return 0;
    for (int i = 2; i<= sqrt(n); i++){
        if (n % i == 0) return 0;
    }
    return 1;
}

int main(int argc, const char * argv[]) {
    int mang[100],kt[100]= {0};
    long long int n;
    scanf("%lld",&n);
    int d =0;
    while (n != 0){
        mang[d] = n % 10;
        n/=10;
        d++;
    }
    int t ;
    for (int i = d-1; i>= 0; i--){
        t =0;
        if (kt[i] != 0) continue;
        if ((nt(mang[i]) == 1)){
            for (int j = d-1; j>=0; j--){
                if (mang[i] == mang[j]){
                    t++;
                    kt[j]++;
                }
            }
            printf("%d %d\n",mang[i],t);
        }
    }
    return 0;
}
