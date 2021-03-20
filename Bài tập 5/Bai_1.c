#include <stdio.h>

int main() {
  //Khai bao bien
  int n,S = 0;
  //Nhap so nguyen duong n bat ky
  printf("Nhap so nguyen duong n bat ky tu ban phim  n = ");
  scanf("%d", &n);
  for(int i = 1; i <= n;i++){
    S+=i*i;
  }
  //Tinh tong
  printf("S = 1^2 + 2^2+...+%d^2 = %d", n, S);
    return 0;
}
