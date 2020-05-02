//Một số được coi là đẹp nếu nó là số nguyên tố và tổng chữ số là một số trong dãy Fibonaci.  Viết chương trình liệt kê trong một đoạn giữa hai số nguyên cho trước có bao nhiêu số đẹp như vậy
//INPUT
//2 50
//OUTPUT
//2 3 5 11 17 23 41
//  main.c
//  so dep (fibonacii va so nt)
//
//  Created by PAT on 5/2/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int ktnt(int n);
int tongChuSo(int n);
void doiCho(int* a,int* b);
int fibonaci(int n);

int main(int argc, const char * argv[]) {
    
    int a,b;
    scanf("%d %d",&a,&b);
    if (a > b)
        doiCho(&a, &b);
    for (int i = a; i<=b ; i++) {
        if (ktnt(i) && fibonaci(tongChuSo(i))) {
            printf("%d ",i);
        }
    }
        
    return 0;
}
void doiCho(int* a,int* b)
{
    int tam = *a;
    *a = *b;
    *b = tam;
}
int tongChuSo(int n){
    int tam =0;
    while (n != 0) {
        tam = tam + n%10;
        n/=10;
    }
    return tam;
}
int ktnt(int n){
    if (n < 2) return 0;
    for (int i = 2; i<= sqrt(n); i++)
        if (n % i == 0) return 0;
    return 1;
}
int fibonaci(int n){
    int mang[100];
    mang[1] = 1;mang[2] = 1;
    int tam = 0,i = 3;
    while (tam < n){
        mang[i] = mang[i-1] + mang[i-2];
        tam = mang[i];
        i++;
    }
    for (int j = 1; j< i; j++ ) {
        if (mang[j] == n) return 1;
    }
    return 0;
}
