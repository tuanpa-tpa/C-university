//
//  main.c
//  Tìm số đẹp (số thuận nghịch lộc phát)
//
//  Created by PAT on 5/2/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>
int thuanNghichChuSoSauVaTongTam(int n);
void doiCho(int* a, int* b);

int main(int argc, const char * argv[]) {
    int a,b;
    scanf("%d %d",&a,&b);
    if (a > b) doiCho(&a,&b);
    for (int i = a; i <= b ; i++){
        if (thuanNghichChuSoSauVaTongTam(i))
            printf("%d ",i);
    }
    return 0;
}
int thuanNghichChuSoSauVaTongTam(int n){
    int tam,tong = 0,kiemTra = 0,i = 0;
    int mang[20];
    while (n != 0) {
        i++;
        tam = n%10;
        if (tam == 6) kiemTra++;
        mang[i] = tam;
        tong += tam;
        n/=10;
    }
    if (kiemTra == 0) return 0;
    tam = tong%10;
    if (tam != 8) return 0;
    int j = 1;
    while (j < i)
    {
        if (mang[j] != mang[i]) return 0;
        i--;
        j++;
    }
    return 1;
}

void doiCho(int* a, int* b){
    int tam = *a;
    *a = *b;
    *b = tam;
}
