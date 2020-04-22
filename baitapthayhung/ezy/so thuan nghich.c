#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int b = a,t=0;
    while (b != 0)
    {
        t = t*10 + b%10;
        b = b/10;
    }
    if (t == a) printf("1"); 
    else printf("0");
    
    return 0;
}