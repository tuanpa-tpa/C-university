//
//  main.c
//  Chèn mảng một chiều
//
//  Created by PAT on 5/6/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n1,n2,mang1[200],mang2[200],p;
    scanf("%d %d %d",&n1,&n2,&p);
    for (int i = 1; i<= n1; i++)
        scanf("%d",&mang1[i]);
    
    for (int i = 1; i<= n2; i++)
        scanf("%d",&mang2[i]);
    
//    for (int i= 1; i <= p; i++)
//        printf("%d ",mang1[i]);
//    for (int i= 1; i<= n2; i++)
//        printf("%d ",mang2[i]);
//    for (int i = p+1; i<= n1; i++)
//        printf("%d ",mang1[i]);
    
    for (int i=1; i<= n1; i++){
        if (i == p+1)
            for (int j = 1; j<= n2; j++)
                printf("%d ",mang2[j]);
        printf("%d ",mang1[i]);
    }
    return 0;
}
