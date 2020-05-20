//Viết chương trình nhập mảng n (n>1) phần tử số nguyên. Đếm các phần tử là số thuận nghịch có ít nhất hai chữ số trong mảng và in ra chúng
//INPUT
//6
//1 525 44 19 181 25
//OUTPUT
//3 525 44 181
//  main.c
//  Đếm các phần tử là số thuận nghịch trong mảng 1 chiều
//
//  Created by PAT on 5/13/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>
#define pt 200
int check(int n);
int main(int argc, const char * argv[]) {
    int n,mang[pt];
    scanf("%d",&n);
    for (int i = 1; i<= n; i++){
        scanf("%d",&mang[i]);
    }
    int d =0;
    for (int i = 1; i<= n; i++){
        if (check(mang[i])) d++;
    }
    printf("%d ",d);
    for (int i = 1; i<= n; i++){
        if (check(mang[i])) printf("%d ",mang[i]);
    }
    return 0;
}
int check(int n){
    int temp = n,tam = 0;
    if (n < 10) return 0;
    while (temp != 0){
        tam = tam*10 + temp % 10;
        temp /=10;
    }
    if (tam == n) return 1;
    else return 0;
}
