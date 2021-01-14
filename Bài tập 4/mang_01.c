#include <stdio.h>

int main(void) {
  // Khai bao bien
  int a[4] = {3,5,7,2};
  int i,Tong = 0;
  for(i = 0;i < 4;i++){
  	//Hien thi day so tren tung mang
  	printf("Phan tu [%d] = %d\n",i,a[i]);
  }
  for(i = 0;i < 4;i++){
  	//Tinh tong cac day so
  	Tong = Tong + a[i];
  }
  //Hien thi tong cac day so 
  printf("Tong cac day so = %d",Tong);
  return 0;
}
