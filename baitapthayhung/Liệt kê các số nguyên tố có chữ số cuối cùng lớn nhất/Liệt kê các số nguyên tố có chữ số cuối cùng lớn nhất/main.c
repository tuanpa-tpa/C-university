//
//  main.c
//  Liệt kê các số nguyên tố có chữ số cuối cùng lớn nhất
//
//  Created by PAT on 6/7/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int ktNT(int n){
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0) return 0;
    }
    return 1;
}

int kt(int n){
    int max = n % 10;
    n/= 10;
    while (n != 0){
        if (n % 10 > max){
            return 0;
        }
        n/=10;
    }
    return 1;
}

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    int d = 0;
    for (int i = 2; i<= n; i++){
        if (ktNT(i)){
            if (kt(i)){
                printf("%d ",i);
                d++;
            }
        }
    }
    printf("\n%d",d);
    return 0;
}
