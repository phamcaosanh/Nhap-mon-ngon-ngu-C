#include <stdio.h>

int main(){
  //khai bao va khoi tao nhieu bien
  int a = 3,b = 5;
  //khai bao nhieu bien
  int tong, hieu, tich;
  double thuong;
  printf("Bien a = 3 va Bien b = 5",a,b);
  tong = a + b;
  printf("\n");
  printf("a + b = %d ", tong);
  hieu = a - b;
  printf("\n");
  printf("a - b = %d", hieu);
  tich = a * b;
  printf("\n");
  printf("a * b = %d", tich);
  thuong = (double)a / b;
  printf("\n");
  printf("a / b = %0.1f", thuong);
  printf("\n");
  
  
  
  
  
  
  
  getchar();
  return 0;
}
