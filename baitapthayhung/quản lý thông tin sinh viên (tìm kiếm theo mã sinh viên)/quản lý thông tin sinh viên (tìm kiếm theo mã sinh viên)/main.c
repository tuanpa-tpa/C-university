//
//  main.c
//  quản lý thông tin sinh viên (tìm kiếm theo mã sinh viên)
//
//  Created by PAT on 6/6/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>
#include <string.h>

struct list {
    int soTT;
    char ten[50];
    char maSV[50];
};

int dem(){
    FILE *f = fopen("phamanhtuan617.bin", "rb");
    int dem = 0;
    int temp = fgetc(f);
    while ((temp = fgetc(f) != EOF)){
        dem++;
        fseek(f, sizeof(struct list)*dem, SEEK_SET);
    }
    fclose(f);
    return dem;
}


void them(int n){
    FILE *f = fopen("phamanhtuan617.bin", "ab");
    struct list temp;
    int d = dem();
    while (getchar()!= '\n');
    for (int i = 1; i<= n;i++){
        temp.soTT = i+d;
        gets(temp.maSV);
        gets(temp.ten);
        fseek(f, 0, SEEK_END);
        fwrite(&temp, sizeof(temp), 1, f);
    }
    fclose(f);
}
void chinhSua(){
    FILE *f = fopen("phamanhtuan617.bin", "rb+");
    char temp[50];
    struct list s;
    int n = dem();
    while(getchar()!= '\n');
    gets(temp);
    for (int i = 0; i< n; i++){
        fseek(f, sizeof(struct list)*i, SEEK_SET);
        fread(&s, sizeof(s), 1, f);
        if (strcmp(s.maSV, temp) == 0){
            struct list add;
            add.soTT = i+1;
            gets(add.maSV);
            gets(add.ten);
            fseek(f, sizeof(struct list)*i, SEEK_SET);
            fwrite(&add, sizeof(add), 1, f);
            puts(add.maSV);
        }
    }
    fclose(f);
}

void xuat(){
    FILE *f = fopen("phamanhtuan617.bin", "rb");
    int n = dem();
    struct list temp;
    char name[50];
    while (getchar()!= '\n');
    gets(name);
    for (int i = 0; i< n; i++){
        fseek(f, sizeof(struct list)*i, SEEK_SET);
        fread(&temp, sizeof(temp), 1, f);
        if (strncmp(name, temp.maSV, strlen(name)) != 0){
            continue;
        }
        printf("%d %s %s\n",temp.soTT,temp.ten,temp.maSV);
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
            chinhSua();
            break;
        case 3:
            xuat();
            break;
        default:
            break;
    }
    return 0;
}
