#include <stdio.h>
#include <math.h>

void quicksort(int dau, int cuoi, long mang[]);
void swap(long* a, long* b);
int kt(int n);

int main()
{
    long nhap[100];
    int n;
    scanf("%d",&n);
        for (int i = 1; i <= n ;i++)
            scanf("%ld",&nhap[i]);
    quicksort(1,n,nhap);
    int i =1;
    while (i <= n){
        if (kt(nhap[i])){
                int dem = 1;
                printf("%ld ",nhap[i]);
                for (int j = i+1; j<= n; j++)
                    if (nhap[i] == nhap[j]){
                            dem++;
                            i++;
                    }
                printf("%d\n",dem);
        }
        i++;
    }
    return 0;
}
void quicksort(int dau, int cuoi, long mang[]){
    long mid = mang[(dau + cuoi)/2];
    int i = dau;
    int j = cuoi;
    do{
        while (mid > mang[i]) i++;
        while (mid < mang[j]) j--;
        if (i <= j){
                swap(&mang[i],&mang[j]);
                i++; j--;
        }
    } while (i <= j);
    if (dau < j)
        quicksort(dau,j,mang);
    if (i < cuoi)
        quicksort(i,cuoi,mang);
}
void swap(long* a, long* b){
    int t = *a;
    *a = *b;
    *b = t;
}
int kt(int n){
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n) ;i++)
        if (n % i == 0) return 0;
    return 1;
}
