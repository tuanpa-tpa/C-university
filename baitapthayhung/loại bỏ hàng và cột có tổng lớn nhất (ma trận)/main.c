#include <stdio.h>
#include <math.h>

int check(int n);

int main()
{
    int mang1[100][100],mang2[100][100],mang3[100][100];
    
    // nhap mang
    int n,m;
    scanf("%d%d",&n,&m);
    for (int i = 1; i<= n; i++)
        for (int j = 1; j <= m;j++ )
            scanf("%d",&mang1[i][j]);
    
    
    // xoa bo hàng
    int tong1 = 0, dau1, cuoi1,max = 0;
    for (int i = 1; i<= n; i++)
        {
            tong1 = 0;
            for (int j = 1; j <= m;j++ )
                tong1 += mang1[i][j];
            if (tong1 > max)
                {
                    max = tong1;
                    dau1 = i;
                }
        }    
    for (int i = dau1; i<= n-1; i++)
            for (int j = 1; j <= m;j++)
                mang1[i][j] = mang1[i+1][j];


    // xoa bo cot
    max = 0;
    for (int i = 1; i<= m; i++)
        {
            tong1 = 0;
            for (int j = 1; j <= n-1;j++ )
                tong1 += mang1[j][i];
            if (tong1 > max)
                {
                    max = tong1;
                    cuoi1 = i;
                }
        }    
    for (int i = 1; i<= n-1; i++)
            for (int j = cuoi1; j <= m-1;j++)
                mang1[i][j] = mang1[i][j+1];


    // xuat ma tran    
        for (int i = 1; i<= n-1; i++)
        {
                for (int j = 1; j <= m-1;j++ )
                {
                printf("%d ",mang1[i][j]);
                }
            printf("\n");
        }
    return 0;
}





// #include <stdio.h>
// #include <math.h>

// int check(int n);

// int main()
// {
//     int mang1[100][100],mang2[100][100],mang3[100][100];
    
//     // nhap mang
//     int n,m;
//     scanf("%d%d",&n,&m);
//     for (int i = 1; i<= n; i++)
//         for (int j = 1; j <= m;j++ )
//             scanf("%d",&mang1[i][j]);
    
//     // them mang tam
//         for (int i = 1; i<= n; i++)
//         for (int j = 1; j <= m;j++ )
//             mang3[i][j] = mang1[i][j];
    
//     // xoa bo hàng
//     int tong1 = 0, dau1, cuoi1,max = 0;
//     for (int i = 1; i<= n; i++)
//         {
//             tong1 = 0;
//             for (int j = 1; j <= m;j++ )
//                 tong1 += mang1[i][j];
//             if (tong1 > max)
//                 {
//                     max = tong1;
//                     dau1 = i;
//                 }
//         }    
//     for (int i = dau1; i<= n-1; i++)
//             for (int j = 1; j <= m;j++)
//                 mang1[i][j] = mang1[i+1][j];
//     for (int i = 1; i<= n-1; i++)
//             for (int j = 1; j <= m;j++)
//                 mang2[i][j] = mang1[i][j];

//     // xoa bo cot
//     max = 0;
//     for (int i = 1; i<= m; i++)
//         {
//             tong1 = 0;
//             for (int j = 1; j <= n;j++ )
//                 tong1 += mang3[j][i];
//             if (tong1 > max)
//                 {
//                     max = tong1;
//                     cuoi1 = i;
//                 }
//         }    
//     for (int i = 1; i<= n-1; i++)
//             for (int j = cuoi1; j <= m-1;j++)
//                 mang2[i][j] = mang2[i][j+1];


//     // xuat ma tran    
//         for (int i = 1; i<= n-1; i++)
//         {
//                 for (int j = 1; j <= m-1;j++ )
//                 {
//                 printf("%d ",mang2[i][j]);
//                 }
//             printf("\n");
//         }
//     return 0;
// }
