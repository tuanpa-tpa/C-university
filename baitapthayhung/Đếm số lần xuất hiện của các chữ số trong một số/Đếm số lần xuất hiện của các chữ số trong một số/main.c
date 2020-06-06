//Viết chương trình C cho phép nhập vào một số n, thực hiện đếm số lần xuất hiện của các chữ số trong n và in ra màn hình.
//INPUT
//112345
//OUTPUT
//1 2
//2 1
//3 1
//4 1
//5 1
//  main.c
//  Đếm số lần xuất hiện của các chữ số trong một số
//
//  Created by PAT on 6/5/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

struct dem {
    int bien;
    int dem;
};

int main(int argc, const char * argv[]) {
    long long int n;
    scanf("%lld",&n);
    int size = 0,mang[100] = {0},dem = 0;
    struct dem phanTu[10];
        while (n != 0){
            int tam = n % 10;
            mang[dem] = tam;
            dem++;
            n /=10;
        }
    for (int i = dem-1 ; i>=0; i--){
        int check = 0;
            for (int j = 0 ; j <= size; j++){
                if (mang[i] == phanTu[j].bien) {
                    phanTu[j].dem ++;
                    check = 1;
                    break;
                }
            }
                if (check == 0){
                    phanTu[size].bien = mang[i];
                    phanTu[size].dem = 1;
                    size ++;
                }
    }
    
    for (int i = 0; i < size; i++){
        if (phanTu[i].dem != 0)
        printf("%d %d \n",phanTu[i].bien,phanTu[i].dem);
    }
    return 0;
}


