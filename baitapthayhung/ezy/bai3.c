#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if (b != 0){
    printf("%d ",a+b);
    printf("%d ",a-b);
    printf("%d ",a*b);
    float chia,a1 = a,b1 =b;
    chia = a1/b1;
    printf("%0.2f ",chia);
    printf("%d ",a%b);
    } else printf("0");
    return 0;
}