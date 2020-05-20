//Viết chương trình C cho phép nhập vào số N, thực hiện liệt kê các số thuận nghịch lớn hơn 1 và nhỏ hơn N thỏa mãn không chứa chữ số 9. Có bao nhiêu số như vậy.
//INPUT
//100
//OUTPUT
//2 3 4 5 6 7 8 11 22 33 44 55 66 77 88
//15
//  main.c
//  liệt kê các số thuận nghịch không chứa chữ số 9
//
//  Created by PAT on 5/9/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>
int check(long long n);
int main(int argc, const char * argv[]){
    long long n,mang[10000],d=0;
    scanf("%lld",&n);
    for (long long i = 2; i< n; i++){
        if (check(i) == 1){
                d++;
                mang[d] = i;
            }
        }
    for (long long i = 1; i<= d; i++)
        printf("%lld ",mang[i]);
        printf("\n%lld ",d);
    return 0;
}
int check(long long n){
    long t = 0,tam = n;
    while ( tam != 0){
        t = t*10 + tam % 10;
        if (tam%10 == 9) return 0;
        tam/=10;
    }
    if (t == n) return 1;
    return 0;
}
