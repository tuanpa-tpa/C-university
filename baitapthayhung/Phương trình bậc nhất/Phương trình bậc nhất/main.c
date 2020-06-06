//
//  main.c
//  Phương trình bậc nhất
//
//  Created by PAT on 6/5/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float x,a,b;
    scanf("%f %f",&a,&b);
    if ((a == 0.0) && (b != 0.0)) {
        printf("VN");
    } else if ((a == 0.0) && (b == 0.0)) {
        printf("VSN");
    } else if ((a != 0.0) && (b == 0.0)){
        printf("0.00");
    } else {
        x = -b/a;
        printf("%0.2f",x);
    }
    return 0;
}
