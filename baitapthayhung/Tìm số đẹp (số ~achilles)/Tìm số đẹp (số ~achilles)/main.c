//Một số được coi là số đẹp khi nếu nó chia hết cho một số nguyên tố nào đó thì cũng chia hết cho bình phương của số nguyên tố đó.  Viết chương trình liệt kê các số đẹp như vậy trong đoạn giữa hai số nguyên dương cho trước.
//INPUT
//1 50
//OUTPUT
//4 8 9 16 25 27 32 36 49
//  main.c
//  Tìm số đẹp (số ~achilles)
//
//  Created by PAT on 5/9/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int kt(int a, int b,int mang[]);
int main() {
    int a,b;
    int arr[1000] = {0};
    scanf("%d %d",&a,&b);
    if (a > b){
        int t =a;
        a =b;
        b =t;
    }
    //  sang nguyen to
    for (int i = 2; i < 1000 ; i++)
    if (arr[i] != 1) {
        for (int j = i*2; j < 1000; j +=i) {
            arr[j] = 1;
        }
    }
    // su ly bai toan
    for (int i = a; i<= b; i++){
        int d1 =0,d2 =0;
        for (int j = 2; j<= i; j++){
            if (arr[j] == 0) {
                if (i % j == 0) d1++;
                int tam = j*j;
                if (i % tam == 0) d2++;
            }
        }
        
        if (d1 == d2) printf("%d ",i);
    }
    return 0;
}
