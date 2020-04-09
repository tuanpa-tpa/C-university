#include<stdio.h>
#include<math.h>
int n;
int nto(int x) {
 if(x < 2) return 0;
 for(int i = 2; i <= sqrt(x); i++)
  if(x%i==0)
   return 0;
 return 1;
}
//1234 -> 4, 123, 3 < 4
int tang(int x) {
 int t = x % 10;
 x/=10;
 while(x > 0) {
  if(t <= x%10)
   return 0;
  t = x % 10;
  x/=10;
 }

 return 1;
}

int giam(int x) {
 int t = x % 10;
 x/=10;
 while(x > 0) {
  if(t >= x%10)
   return 0;
  t = x % 10;
  x/=10;

 }

 return 1;
}

void tanggiam() {
 scanf("%d",&n);
 int dem = 0;
 for(int i = pow(10, n-1); i < pow(10, n); i++) {
  if(nto(i) && ( tang(i) || giam(i))) {
   dem++;
  }
 }
 printf("%d",dem);
}


int main() {
 tanggiam();
 return 0;
}