#include <stdio.h>
int t = 0;
void nhiphan(int n);
int main()
{
    scanf("%d",&t);
    nhiphan(t);
    return 0;
}

void nhiphan(int n)
{
    if (n > 0)
        {
            nhiphan(n/2);
            printf("%d",n%2);
        }
}