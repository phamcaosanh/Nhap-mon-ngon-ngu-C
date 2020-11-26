#include <stdio.h>

int main(){
  //khai bao va khoi tao nhieu bien
  int a = 3,b = 5;
  //khai bao nhieu bien
  int tong, hieu, tich;
  //khai bao bien
  double thuong;
  tong = a + b;
  hieu = a - b;
  tich = a * b;
  thuong = (double)a / b;
  printf("a\tb\ta+b\ta-b\ta*b\ta/b\n%d\t%d\t%d\t%d\t%d\t%0.1f",a,b,tong,hieu,tich,thuong);
  printf("\n");
  
  
  
  
  
  
  
  getchar();
  return 0;
}
