//Thông tin về sinh viên gồm có: 1. mã sinh viên là số nguyên tự động tăng; 2. tên sinh viên; 3. điểm sinh viên là số thực gồm điểm môn A, môn B, môn C.
//Viết chương trình cho phép ghi ra file nhị phân(yêu cầu file được đặt tên là mã sinh viên và tên file mở rộng .bin ) thực hiện 3 chức năng:
//1. thêm mới
//2. cập nhật điểm theo mã sinh viên
//3. hiển thị danh sách sinh viên theo tổng điểm tăng dần
//
//Mô tả dữ liệu vào:
//- Dòng thứ nhất là lựa chọn chức năng thực hiện
//- Dòng thứ hai
//   + Nếu lựa chọn ở dòng thứ nhất là 1 thì nhập số sinh viên sẽ thêm mới
//   + Nếu lựa chọn ở dòng thứ nhất là 2 thì nhập mã sinh viên sẽ sửa đổi
//- Dòng tiếp theo là thông tin sinh viên
//Mô tả dữ liệu ra:
//- Nếu lựa chọn là 1 thì in ra số sinh viên được thêm
//- Nếu lựa chọn là 2 thì in ra mã sinh viên được sửa
//- Nếu lựa chọn là 3 thì in ra danh sách theo mô tả dưới đây (các thông tin cách nhau một khoảng trắng)
//Một trường hợp sử dụng chương trình
//INPUT (1)
//1
//2
//nguyen van hai
//8.5 5.5 7.5
//tran van tuan
//8.5 .50 9.0
//OUTPUT (1)
//2
//
//INPUT (2)
//2
//2
//tran van nam
//5.5 5.0 6.0
//OUTPUT (2)
//2
//
//INPUT (3)
//3
//OUTPUT
//2 tran van nam 5.5 5.0 6.0
//1 nguyen van hai 8.5 5.5 7.5
//  main.c
//  quản lý thông tin sinh viên (tổng điểm tăng dần)
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
    float arr[4];
}; struct list sinhVien[100];


int dem(){
    FILE *f = fopen("hellobaybevoi.bin", "rb");
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
    FILE *f = fopen("hellobaybevoi.bin", "ab");
    int d = dem();
    struct list temp;
    for (int i = 1; i<= n; i++){
        temp.soTT = d+i;
        del;
        gets(temp.name);
        for (int i = 0; i<3; i++){
            scanf("%f",&temp.arr[i]);
        }
        fseek(f, 0, SEEK_END);
        fwrite(&temp, sizeof(temp), 1, f);
    }
    fclose(f);
}

void chinhSua(int n){
    FILE *f = fopen("hellobaybevoi.bin", "rb+");
    fseek(f, sizeof(struct list)*(n-1), SEEK_SET);
    struct list temp;
    temp.soTT = n;
    del;
    gets(temp.name);
    for (int i =0; i< 3; i++){
        scanf("%f",&temp.arr[i]);
    }
    fwrite(&temp, sizeof(temp), 1, f);
//    fclose(f);
}
int tong(int n){
    int t = 0;
    for (int i = 0; i<3 ; i++){
        t += sinhVien[n].arr[i];
    }
    return t;
}

void xuat(){
    FILE *f = fopen("hellobaybevoi.bin", "rb");
    int d = dem();
    for (int i = 0; i < d; i++){
        fseek(f, sizeof(struct list)*i, SEEK_SET);
        fread(&sinhVien[i], sizeof(struct list), 1, f);
    }
    for (int i = 0; i< d-1; i++){
        for (int j = i+1; j< d; j++){
            if (tong(i) > tong(j)){
                struct list temp = sinhVien[i];
                sinhVien[i] = sinhVien[j];
                sinhVien[j] = temp;
            }
        }
    }
    
    for (int i= 0; i< d; i++){
        printf("%d %s ",sinhVien[i].soTT,sinhVien[i].name);
        for (int j = 0; j< 3; j++){
            printf("%0.1f ",sinhVien[i].arr[j]);
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
