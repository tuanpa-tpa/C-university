//
//  main.c
//  quản lý thông tin sản phẩm (lãi giảm dần)
//
//  Created by PAT on 6/6/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <math.h>

struct list{
    char name[50];
    int nums;
    float tien[2];
};
struct list hang[100];

int dem(){
    FILE *f = fopen("hellotester.bin", "rb");
    int d =0;
    int temp = fgetc(f);
    while ((temp = fgetc(f) != EOF)){
        d++;
        fseek(f, sizeof(struct list)*d, SEEK_SET);
    }
    fclose(f);
    return d;
}

void them(int n){
    FILE *f = fopen("hellotester.bin", "ab");
    struct list s;
    int d = dem();
    for (int i = 1; i<= n; i++){
        s.nums = d+i;
        while (getchar()!= '\n');
        gets(s.name);
        for (int j = 0; j< 2; j++){
            scanf("%f",&s.tien[j]);
        }
        fseek(f, 0, SEEK_END);
        fwrite(&s, sizeof(s), 1, f);
    }
    fclose(f);
}

void chinhSua(int n){
    FILE *f = fopen("hellotester.bin", "rb+");
    fseek(f, sizeof(struct list)*(n-1), SEEK_SET);
    struct list s;
    s.nums = n;
    while(getchar()!= '\n');
    gets(s.name);
    for (int i = 0; i< 2; i++){
        scanf("%f",&s.tien[i]);
    }
    fwrite(&s, sizeof(s), 1, f);
//    fclose(f);
}

float hieu(int n){
    int t = 0;
    t = hang[n].tien[1] - hang[n].tien[0];
    return t;
}

void xuat(){
    FILE *f = fopen("hellotester.bin", "rb");
    int n = dem();
    for (int i = 0; i< n; i++){
        fseek(f, sizeof(struct list)*i, SEEK_SET);
        fread(&hang[i], sizeof(struct list), 1, f);
    }
    for (int i = 0; i< n; i++){
        for (int j = 0; j< n; j++){
            if (hieu(i) > hieu(j)){
                struct list temp = hang[i];
                hang[i] = hang[j];
                hang[j] = temp;
            }
        }
    }
    for (int i = 0; i< n; i++){
        printf("%d %s ",hang[i].nums,hang[i].name);
        for (int j= 0; j<2; j++){
            printf("%0.2f ",hang[i].tien[j]);
        }
        printf("\n");
    }
    fclose(f);
}


int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    switch (n) {
        case 1:
            scanf("%d",&n);
            them(n);
            printf("%d",n);
            break;
        case 2:
            scanf("%d",&n);
            chinhSua(n);
            printf("%d",n);
            break;
        case 3:
            xuat();
            break;
        default:
            break;
    }
    return 0;
}
