//
//  Created by PAT on 2/13/20.
//  Copyright © 2020 tuan. All rights reserved.
//

#include <stdio.h>
//#include <math.h>
int dao(int n);
int main(int argc, const char * argv[]) {
    int n,a;
    long arr[10000];
    scanf("%d%d",&a,&n);
    for (int i = 2;i < n ; i++)
        if (arr[i] != 1) {
            for (int j = i*2; j < 10000; j +=i) {
                arr[j] = 1;
            };
        };
    for (int i = a ; i < n ; i++)
        if ((arr[i] != 1) && (arr[dao(i)] != 1))
            {
                    printf("%d ",i);
            };
    return 0;
}

int dao(int n)
{
    int t = 0;
    while (n != 0) {
        t = t * 10 + n % 10;
        n = n / 10;
    };
    return t;
}



// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int mang[3*n];
//     for (int i = 2; i<= 3*n;i++)
//         mang[i] = 1;
//     for (int i = 2; i<= n*3/2; i++)
//         if (i != 0)
//             for (int j = i*2; j<= 3*n; j+=i)
//                 mang[j] = 0;
//     int d = 0;
//     for(int i = 2; i<= 3*n; i++)
//         if (mang[i] == 1)
//         {
//             if(d == n) break;
//             d++;
//             printf("%d ",i);
//         } 
//     return 0;
// }