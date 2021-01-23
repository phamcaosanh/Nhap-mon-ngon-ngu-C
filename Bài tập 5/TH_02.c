#include <stdio.h>


int main() {
//Khai bao bien
int n,sum = 0;
//Nhap so nguyen duong n bat ki tu ban phim
printf("Nhap so nguyen duong bat ki: ");
scanf("%d", &n);
for(int i = 1;i < n;i++){
  sum+=i;
}
//Tong cac so nguyen duong
printf("S = 1 + 2 ... + %d = %d",n,sum);
  return 0;
}
