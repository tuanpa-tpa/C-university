//Tìm ước chung lớn nhất và bội chung nhỏ nhất của hai số nguyên dương a và b
//INPUT
//12 18
//OUTPUT
//6 36
//  main.c
//  Tìm ước chung lớn nhất và bội chung nhỏ nhất
//
//  Created by PAT on 5/9/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b,t;
    scanf("%d%d",&a,&b);
    t = a*b;
    if (a < b)
        {
            int t = a;
            a = b;
            b = t;
        }
    while ( b != 0)
        {
            int tmp = a % b;
            a = b;
            b = tmp;
        }
    printf("%d ",a);
    printf("%d",t / a);
    return 0;
}
