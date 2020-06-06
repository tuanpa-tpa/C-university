//
//  main.c
//  quản lý thông tin thiết bị (sắp xếp giảm dần theo giá nhập)
//
//  Created by PAT on 6/6/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#define del while(getchar()!='\n')

struct list {
    int soTT;
    char name[50];
    float arr;
    int nam;
}; struct list thietBi[100];


int dem(){
    FILE *f = fopen("helloworld.bin", "rb");
    int d = 0;
    int temp = fgetc(f);
    while ((temp = fgetc(f) != EOF)){
        d++;
        fseek(f, sizeof(struct list)*d, SEEK_SET);
    }
    fclose(f);
    return d;
}

void them(int n){
    FILE *f = fopen("helloworld.bin", "ab");
    int d = dem();
    struct list temp;
    for (int i = 1; i<= n; i++){
        temp.soTT = d+i;
        del;
        gets(temp.name);
        scanf("%f %d",&temp.arr,&temp.nam);
        fseek(f, 0, SEEK_END);
        fwrite(&temp, sizeof(temp), 1, f);
    }
    fclose(f);
}

void chinhSua(int n){
    FILE *f = fopen("helloworld.bin", "rb+");
    fseek(f, sizeof(struct list)*(n-1), SEEK_SET);
    struct list temp;
    temp.soTT = n;
    del;
    gets(temp.name);
    scanf("%f %d",&temp.arr,&temp.nam);
    fwrite(&temp, sizeof(temp), 1, f);
    fclose(f);
}
void xuat(){
    FILE *f = fopen("helloworld.bin", "rb");
    int d = dem();
    for (int i = 0; i < d; i++){
        fseek(f, sizeof(struct list)*i, SEEK_SET);
        fread(&thietBi[i], sizeof(struct list), 1, f);
    }
    for (int i = 0; i< d-1; i++){
        for (int j = i+1; j< d; j++){
            if (thietBi[i].arr < thietBi[j].arr){
                struct list temp = thietBi[i];
                thietBi[i] = thietBi[j];
                thietBi[j] = temp;
            }
        }
    }
    
    for (int i= 0; i< d; i++){
        printf("%d %s ",thietBi[i].soTT,thietBi[i].name);
        printf("%0.1f %d",thietBi[i].arr,thietBi[i].nam);
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
