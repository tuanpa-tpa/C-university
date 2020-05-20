//
//  main.c
//  chèn (insertion sort)
//
//  Created by PAT on 5/2/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

void output(int n, int mang[]);
int main(int argc, const char * argv[]) {
    int mang[] = {8,2,6,4,9,19,10,7,4,5};
    int n = sizeof(mang)/sizeof(mang[1]);
    for (int i = 1; i < n; i++){
        int index = mang[i];
        int viTri = i - 1;
        while( (viTri >= 0) && (mang[viTri] > index)){
            mang[viTri+1] = mang[viTri]; // don
            viTri--;
        }
        mang[viTri+1] = index;
    }
    output(n,mang);
    return 0;
}
void output(int n, int mang[]){
    for (int i = 0; i< n; i++)
        printf("%d ",mang[i]);
}
// dung khi co mang da duoc sap xep truoc
