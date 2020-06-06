//
//  main.c
//  Liệt kê các số armstrong nằm trong khoảng a,b
//
//  Created by PAT on 6/5/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int muN(int n){
    int d =0;
    while (n != 0){
        n /= 10;
        d++;
    }
    return d;
}
int check(int n,int mu){
    int t = 0,tam = n;
    while (n != 0){
        t += pow((n % 10),mu);
        n/=10;
    }
    if (tam == t)
        return 1;
    else return 0;
}
int main(int argc, const char * argv[]) {
    int a,b;
    scanf("%d %d",&a,&b);
    if (a > b){
        a = a+b;
        b = a-b;
        a = a-b;
    }
    for (int i = a; i <=b; i++){
        int mu = muN(i);
        if (check(i,mu)) printf("%d ",i);
    }
    return 0;
}

