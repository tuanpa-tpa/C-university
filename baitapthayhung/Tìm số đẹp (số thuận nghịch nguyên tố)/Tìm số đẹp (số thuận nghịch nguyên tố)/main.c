//
//  main.c
//  Tìm số đẹp (số thuận nghịch nguyên tố)
//
//  Created by PAT on 6/5/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int dao(int n){
    int tam = 0;
    while (n!=0){
        tam  = tam*10 + n%10;
        n/=10;
    }
    return tam;
}

int main(int argc, const char * argv[]) {
    int a,b,mang[1000] = {0};
    scanf("%d %d",&a,&b);
    if (a > b){
        a = a+b;
        b = a - b;
        a = a - b;
    }
    for (int  i = 2; i< 1000; i++){
        if (mang[i] == 0)
        for (int j = i*2; j< 1000; j+=i){
            mang[j] = 1;
        }
    }
    for (int i = a; i<= b; i++){
        if ((mang[i] == 0) && (mang[dao(i)] == 0) && (dao(i) != i ))
            printf("%d ",i);
    }
    return 0;
}
