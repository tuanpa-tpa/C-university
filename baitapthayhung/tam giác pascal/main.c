#include<stdio.h>

int gt(int n)
{
int i, gt=1;
for(i=2;i<=n;i++)
    gt*=i;
return gt;
}
int tohop(int n, int k)
{
 return gt(n)/(gt(k) * gt(n-k));
}
void pcal(int n)
{
int i,j,d;
        d = n-1;
        for(i=0;i<n;i++)
            {
                for (int h = 1;h <= d; h++)
                    printf(" ");
                for(j=0;j<=i;j++)
                    {        
                        printf("%d ",tohop(i,j));
                    }
                d--;
                printf("\n");
            }
}

int main()
{
int n;
scanf("%d",&n);
pcal(n);
return 0;
}