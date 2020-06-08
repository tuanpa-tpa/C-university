//Viết chương trình C cho phép nhập vào 2 số a và b. Sắp xếp a, b theo thứ tự tăng dần tổng các chữ số.
//(Nếu a và b có tổng các chữ số bằng nhau thì in ra a trước)
//INPUT
//99 1111
//OUTPUT
//1111 99
//  main.c
//  sắp xếp tăng dần theo tổng các chữ số
//
//  Created by PAT on 6/7/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>
int tong(int n){
    int t = 0;
    while (n != 0){
        t+= n%10;
        n/=10;
    }
    return t;
}

int main(int argc, const char * argv[]) {
    int a,b;
    scanf("%d %d",&a,&b);
    if (tong(a) > tong(b)){
        printf("%d %d",b,a);
    } else {
        printf("%d %d",a,b);
    }
    return 0;
}
