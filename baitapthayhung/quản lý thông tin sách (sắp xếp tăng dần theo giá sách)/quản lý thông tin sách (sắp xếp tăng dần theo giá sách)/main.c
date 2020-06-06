//
//  main.c
//  quản lý thông tin sách (sắp xếp tăng dần theo giá sách)
//
//  Created by PAT on 6/6/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#define del while(getchar()!='\n')

struct list {
    int soTT;
    char tenSach[50];
    char tacGia[50];
    float gia;
}; struct list sach[100];

char string[50];

int dem(){
    FILE *f = fopen("trasuatrantrauduongden.bin", "rb");
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
    FILE *f = fopen("trasuatrantrauduongden.bin", "ab");
    int d = dem();
    struct list temp;
    for (int i = 1; i<= n; i++){
        temp.soTT = d+i;
        del;
        gets(temp.tenSach);
        gets(temp.tacGia);
        scanf("%f",&temp.gia);
        fseek(f, 0, SEEK_END);
        fwrite(&temp, sizeof(temp), 1, f);
    }
    fclose(f);
}

void chinhSua(int n){
    FILE *f = fopen("trasuatrantrauduongden.bin", "rb+");
    fseek(f, sizeof(struct list)*(n-1), SEEK_SET);
    struct list temp;
    temp.soTT = n;
    del;
    gets(temp.tenSach);
    gets(temp.tacGia);
    scanf("%f",&temp.gia);
    strcpy(string, temp.tenSach);
    fwrite(&temp, sizeof(temp), 1, f);
//    fclose(f);
}
void xuat(){
    FILE *f = fopen("trasuatrantrauduongden.bin", "rb");
    int d = dem();
    for (int i = 0; i < d; i++){
        fseek(f, sizeof(struct list)*i, SEEK_SET);
        fread(&sach[i], sizeof(struct list), 1, f);
    }
    for (int i = 0; i< d-1; i++){
        for (int j = i+1; j< d; j++){
            if (sach[i].gia > sach[j].gia){
                struct list temp = sach[i];
                sach[i] = sach[j];
                sach[j] = temp;
            }
        }
    }
    
    for (int i= 0; i< d; i++){
        printf("%d %s ",sach[i].soTT,sach[i].tenSach);
        printf("%0.2f %s",sach[i].gia,sach[i].tacGia);
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
            printf("%s",string);
            break;
        case 3:
            xuat();
            break;
        default:
            break;
    }
    return 0;
}
