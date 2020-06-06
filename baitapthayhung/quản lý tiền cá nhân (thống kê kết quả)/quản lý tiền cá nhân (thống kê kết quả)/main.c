//
//  main.c
//  quản lý tiền cá nhân (thống kê kết quả)
//
//  Created by PAT on 6/6/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>
#include <string.h>

struct list {
    int soTT,luaChon;
    char name[50];
    int tien;
};

struct list caNhan[100];

int dem(){
    FILE *f = fopen("dhjshdhka.bin","rb");
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
    FILE *f = fopen("dhjshdhka.bin","ab");
    struct list s;
    int d = dem(),chi=0,thu=0;
    for (int i= 1; i <= n; i++){
        s.soTT = i+d;
        while(getchar()!='\n');
        scanf("%d",&s.luaChon);
        if (s.luaChon == 1) thu++;
        else chi++;
        while(getchar()!='\n');
        gets(s.name);
        scanf("%d",&s.tien);
        fseek(f, 0, SEEK_END);
        fwrite(&s, sizeof(s), 1, f);
    }
    printf("%d %d",thu,chi);
    fclose(f);
}

void chinhSua(int n){
    FILE *f = fopen("dhjshdhka.bin","rb+");
    struct list s;
    s.soTT = n;
    while(getchar()!='\n');
    scanf("%d",&s.luaChon);
    while(getchar()!='\n');
    gets(s.name);
    scanf("%d",&s.tien);
    fseek(f, sizeof(struct list)*(n-1),SEEK_SET);
    fwrite(&s, sizeof(s), 1, f);
    puts(s.name);
    fclose(f);
}

void xuat(){
    FILE *f = fopen("dhjshdhka.bin","rb");
    int thu=0,chi=0;
    int n = dem();
    for (int i = 0; i< n; i++){
        fseek(f,sizeof(struct list)*i,SEEK_SET);
        fread(&caNhan[i], sizeof(struct list), 1, f);
        if (caNhan[i].luaChon == 1) thu += caNhan[i].tien;
        else chi+= caNhan[i].tien;
    }
    printf("%d %d %d",thu,chi,thu-chi);
    
    fclose(f);
}

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    switch (n) {
        case 1:
            scanf("%d",&n);
            them(n);
            break;
        case 2:
            scanf("%d",&n);
            chinhSua(n);
            break;
        case 3:
            xuat();
            break;
        default:
            break;
    }
    return 0;
}
