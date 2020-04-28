#include <stdio.h>
int t = 0;
void dao(int n);
int main()
{
    dao(5);
    // printf("%d",t);
    return 0;
}

void dao(int n)
{
    if (n > 0)
        dao(n-1);
    printf("%d ", n);
}