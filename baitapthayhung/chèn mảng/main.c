#include <stdio.h>

int main()
{
    int n,m,p;
    int mang1[100],mang2[100];
    // nhap du lieu
    scanf("%d%d%d",&n,&m,&p);
    for (int i = 0; i< n;i++)
        scanf("%d",&mang1[i]);
    for (int i = 0; i< m;i++)
        scanf("%d",&mang2[i]);
    // xu li
    int d = -1,d2 = -1;

    for (int i = 0; i < n+m ;i++)
        {
            if (i >= p && i <= p+m-1)
                {
                    d++;
                    printf("%d ",mang2[d]);
                }
            else
                {
                    d2++;
                    printf("%d ",mang1[d2]);
                }
        }
    return 0;
}