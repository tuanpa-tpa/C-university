//
//  main.c
//  Liệt kê n số đầu tiên thuộc dãy fibonacci
//
//  Created by PAT on 6/5/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int fibonacci(int n) {
    int f0 = 0;
    int f1 = 1;
    int fn = 1;
    int i;
 
    if (n < 0) {
        return -1;
    } else if (n == 0 || n == 1) {
        return n;
    } else {
        for (i = 2; i < n; i++) {
            f0 = f1;
            f1 = fn;
            fn = f0 + f1;
        }
    }
    return fn;
}
int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
        printf("%d ",fibonacci(i));
    return 0;
}
