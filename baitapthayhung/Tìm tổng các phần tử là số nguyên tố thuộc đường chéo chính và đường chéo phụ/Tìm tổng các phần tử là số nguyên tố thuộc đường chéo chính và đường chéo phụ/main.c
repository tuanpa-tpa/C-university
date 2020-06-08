//Viết chương trình C cho phép nhập ma trận A là ma trận vuông cấp n. Tìm tổng các phần tử là số nguyên tố thuộc đường chéo chính và đường chéo phụ.
//Trong đó
//INPUT
//- Dòng đầu tiên là cấp của ma trận
//- Các dòng tiếp theo là các phần tử của ma trận
//OUTPUT
//- Dòng đầu tiên in kết quả của chương trình (nếu không tìm thấy số nguyên tố nào thì in ra 0)
//INPUT
//4
//1 2 3 4
//5 6 7 8
//9 10 11 12
//13 14 15 16
//OUTPUT
//31
//  main.c
//  Tìm tổng các phần tử là số nguyên tố thuộc đường chéo chính và đường chéo phụ
//
//  Created by PAT on 6/7/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main()
{
    int arr[100][100];
    int n;
    // nhap gia tri mang
    scanf("%d",&n);
    for (int i = 1;i <= n ;i++)
        for (int j = 1 ; j<= n;j++)
            scanf("%d",&arr[i][j]);
    //  sang nguyen to
    int nt[10000];
    nt[1] = 0;nt[0] = 0;
    for (int i = 2; i<= 9999;i++)
        nt[i] = 1;
    for (int i = 2;i < 500 ; i++)
        if (nt[i] == 1)
            for (int j = i*2; j < 10000; j +=i)
                nt[j] = 0;
    // cheo ma tran
    int t =0,check = 0;;
    int mid = 0;
    if (n % 2 != 0){
        mid = (n+1)/2;
        if (nt[arr[mid][mid]] == 1){
            check =1;
        }
    }
    for (int i = 1;i <= n ;i++)
        for (int j = 1 ; j<= n;j++)
        {
            if   (i == j)
                if (nt[arr[i][j]] == 1)
                    {
                        t+=arr[i][j];
//                        nt[arr[i][j]]++;
                    }
            if   (i == n-j+1 )
                if (nt[arr[i][j]] == 1)
                {
                    t+=arr[i][j];
//                    nt[arr[i][j]]++;
                }
        }
    if (check == 1){
        printf("%d",t - arr[mid][mid]);
    } else printf("%d",t);
    return 0;
}
