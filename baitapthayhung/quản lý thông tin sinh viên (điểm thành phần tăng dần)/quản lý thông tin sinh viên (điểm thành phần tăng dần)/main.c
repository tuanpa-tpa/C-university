//
//  main.c
//  quản lý thông tin sinh viên (điểm thành phần tăng dần)
//
//  Created by PAT on 6/6/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>
#include <string.h>

struct sv {
    char name[50];
    int nums;
    float p[3];
};
struct sv ss[100];

int dem(){
    FILE *f = fopen("B19DCCN617.bin", "rb");
    int d = 0;
    int temp = fgetc(f);
    while ((temp = fgetc(f) != EOF)){
        d++;
        fseek(f, sizeof(struct sv)*d, SEEK_SET);
    }
    fclose(f);
    return d;
}

void them(int n){
    FILE *f = fopen("B19DCCN617.bin", "ab");
    int d = dem();
    for (int i = 1; i<=n; i++){
        struct sv s;
        s.nums = d+i;
        while(getchar()!= '\n');
        gets(s.name);
        for (int j = 0; j< 3; j++){
            scanf("%f",&s.p[j]);
        }
        fseek(f, 0, SEEK_END);
        fwrite(&s, sizeof(s), 1, f);
    }
    fclose(f);
}

void chinhSua(int n){
    FILE *f = fopen("B19DCCN617.bin", "rb+");
    fseek(f, sizeof(struct sv)*(n-1), SEEK_SET);
    struct sv s;
    s.nums = n;
    while(getchar()!= '\n');
    gets(s.name);
    for (int i = 0; i< 3; i++){
        scanf("%f",&s.p[i]);
    }
    fwrite(&s, sizeof(s), 1, f);
    fclose(f);
}

void xuat(){
    FILE *f = fopen("B19DCCN617.bin", "rb");
    int n = dem()+1;
    for (int i = 0; i< n; i++){
        fseek(f, sizeof(struct sv)*i, SEEK_SET);
        fread(&ss[i], sizeof(struct sv), 1, f);
    }
    for (int i = 0; i< n; i++){
        if ( (ss[i].p[0] < ss[i].p[1]) && (ss[i].p[1] < ss[i].p[2]) ){
            printf("%d %s ",ss[i].nums,ss[i].name);
            for (int j = 0; j<3; j++){
                printf("%0.1f ",ss[i].p[j]);
            }
            printf("\n");
        }
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
