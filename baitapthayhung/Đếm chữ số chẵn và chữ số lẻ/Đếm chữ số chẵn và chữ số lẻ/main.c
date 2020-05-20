//Nhập một số nguyên dương N không quá 9 chữ số. Hãy đếm xem N có bao nhiêu chữ số lẻ và bao nhiêu chữ  số  chẵn.  Nếu không tồn tại số lẻ hoặc số chẵn thì in ra kết quả là 0 cho loại số tương ứng
//INPUT
//12345678
//OUTPUT
//4 4
//  main.c
//  Đếm chữ số chẵn và chữ số lẻ
//
//  Created by PAT on 5/9/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    long tam;
    scanf("%ld",&tam);
    int chan=0,le=0;
    while (tam != 0) {
        if ((tam % 10) % 2 == 0) chan++;
        else le++;
        tam /=10;
    }
    printf("%d %d",le,chan);
    return 0;
}
