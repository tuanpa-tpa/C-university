#include <stdio.h>

int fibonaci(int n);
int main()
{
    int n ;
    scanf("%d",&n);
    fibonaci(n);
    return 0;
}
int fibonaci(int n)
{
    if (n == 1 ) return printf("0");
    if (n == 2) return printf("0 1");
    if (n >= 3) {
        printf("0 1 1");
    }
    int n1 = 1, n2 = 1,n3;
    int i = 3;
    while (i < n)
    {
        n3 = n1 + n2;
        printf(" %d",n3);
        n1 = n2;
        n2 = n3;
        i++;
    }
return 0;  
}



// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     int n,t[100],d,h = 0;
//     scanf("%d",&n);
//     if (n == 1) printf("1");
//     else
//     {
//     t[1] = 1;
//     t[2] = 1;
//     t[3] = 2;
//     d = 3;
//     while ( t[d] < n)
//     {
//         d++;
//         t[d] = t[d-1] + t[d-2];
//     }
//     for (int i = 1; i<= d; i++)
//         if (t[d] == n)
//             {
//                 printf("1");
//                 h = 1;
//                 break;
//             }
//     if (h == 0) printf("0");
//     }
//     return 0;
// }