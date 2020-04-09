#include <stdio.h>
#include <math.h>

int main() {
    int n,a,b;
    int arr[1000],mang[1000];

    scanf("%d%d",&a,&b);
    if (a > b)
        {
            int tmp = a;
            a=b;
            b= tmp;
        }
    for (int i = 2; i< 1000; i++)
        arr[i] = 0;
    for (int i = 0; i<= b; i++)
        mang[i] = 0;
    // sang nt
    for (int i = 2;i <= b/2 ; i++)
        if (arr[i] != 1) 
            for (int j = i*2; j < b*3; j +=i) 
                arr[j] = 1;
    // bai toan

    for (int i = a ; i <= b ; i++)
        for (int j = 2; j<= b; j++)
        if (arr[j] != 1)
            if ((i % j == 0) && (i % (j*j) == 0))
                mang[i]++;
    for (int i = a; i<= b; i++)
        if (mang[i] != 0)
            printf("%d ",i);
    return 0;
}
