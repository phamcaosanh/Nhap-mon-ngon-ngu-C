#include<stdio.h>

int main(){
  //Khai bao bien
  int r;
  float Cv,Dt,pi = 3.14;
  //Nhap ban kinh R tu ban phim
  printf("Nhap Ban Kinh R :");
  scanf("%d", &r);
  //Cong thuc tinh chu vi va dien tich hinh tron
  Cv = 2*pi*r;
  Dt = pi*r*r;
  //Tinh chu vi va dien tich hinh tron
  printf("Dien tich hinh tron = %.2f\n",Cv);
  printf("Chu vi hinh tron = %.2f",Dt);

  return 0;
}
