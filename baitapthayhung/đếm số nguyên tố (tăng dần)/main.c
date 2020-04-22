#include <stdio.h>
int main() {
    int n,a = 0;
    int check[10000];
    int nhap[10000];
    int dem[10000];
    scanf("%d",&n);
    for (int i = 0; i< n;i++)
        dem[i] = 0;
    check[0] = 1;
    check[1] = 1;
    for (int i = 1; i<=n ;i++)
        scanf("%d",&nhap[i]);
    for (int i = 2;i < n ; i++)
        if (check[i] != 1) {
            for (int j = i*2; j < 10000; j +=i) {
                check[j] = 1;
            };
        };
    for (int i = 1 ; i <= n ; i++)
        if (check[nhap[i]] != 1)
        {
            dem[nhap[i]]++;
            a++;
        }
    int tam;
    for (int i = 1;i <= n;i++)
        if (dem[i] != 0){
            printf("%d %d \n",i,dem[i]);
            if (tam == a) break;
        }
    return 0;
}
