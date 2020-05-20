//
//  main.c
//  liệt kê các số nguyên tố có tổng các chữ số chia hết cho 5
//
//  Created by PAT on 5/9/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int kt(int n);
int kt2(int n);
int main(int argc, const char * argv[]) {
    int n,d =0;
    int mang[100] ={0};
    scanf("%d",&n);
    for (int i = 2; i<= n; i++)
        if ((kt(i) == 1) && (kt2(i) == 1)) {
            d++;
            mang[d] = i;
        }
    for (int i =1; i<= d; i++)
        printf("%d ",mang[i]);
    
    printf("\n%d",d);
    return 0;
}
int kt(int n){
    if (n <2) return 0;
    for (int i= 2; i<= sqrt(n);i++){
        if (n %i == 0) return 0;
    }
    return 1;
}
int kt2(int n){
    int t = n,tong = 0;;
    while (t != 0){
        tong += t%10;
        t/=10;
    }
    if (tong % 5 == 0) return 1;
    return 0;
}
