#include <stdio.h>
#include <math.h>

int main() {
    int n,a,b;
    int arr[1000],mang[100];

    scanf("%d%d",&a,&b);
    if (a > n)
        {
            int tmp = a;
            a=b;
            b= tmp;
        }
    int max = b;

    // sang nt
    for (int i = 2;i <= b ; i++)
        if (arr[i] != 1) 
            for (int j = i*2; j < 1000; j +=i) 
                arr[j] = 1;
    // bai toan

    for (int i = a ; i <= b ; i++)
        for (int j = 2; j<= b; j++)
        if (arr[j] != 1)
            if ((i % j == 0) && (i % (j*j) == 0) )
                printf("%d ",i);
    return 0;
}
