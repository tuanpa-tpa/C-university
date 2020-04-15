#include <stdio.h>

int main() {

    int year;
    scanf("%d",&year);
    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)) ){
        printf("nam nhuan");
    } else {
        printf("khong phai nam nhuan");
    }

    for (int i = 0; i <= 10 ; i++) {
        printf("hello\n");
    }
    return 0;
}