//Một số được coi là đẹp nếu nó là số thuận nghịch và có ít nhất 3 ước số nguyên tố khác nhau.  Viết chương trình in ra các số đẹp như vậy trong một đoạn giữa hai số nguyên cho trước
//INPUT
//2 100
//OUTPUT
//66
//  main.c
//  Tìm số đẹp (thuận nghịch và có ít nhất 3 ước số nguyên tố)
//
//  Created by PAT on 6/5/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int nt(int n){
    if ( n < 2) return 0;
    for (int i = 2; i<= sqrt(n); i++){
        if (n % i == 0) return 0;
    }
    return 1;
}
int dao(int n){
    int tam=0;
    while (n != 0){
        tam = tam*10 + n%10;
        n/=10;
    }
    return tam;
}
int ktThuanNghich(int n){
    if (n == dao(n)) return 1;
    else return 0;
}
int ktUoc(int n){
    int d=0;
    for (int i = 2; i< n; i++){
        if (n % i == 0){
            if (nt(i)){
                d++;
            }
        }
    }
    if (d >=3 ) return 1;
    else  return 0;
}

int main(int argc, const char * argv[]) {
    int a,b;
    scanf("%d %d",&a,&b);
    if (a > b){
        a = a+b;
        b = a -b;
        a = a-b;
    }
    for (int i = a; i<=b; i++){
        if (ktThuanNghich(i) && ktUoc(i)){
            printf("%d ",i);
        }
    }
    return 0;
}
