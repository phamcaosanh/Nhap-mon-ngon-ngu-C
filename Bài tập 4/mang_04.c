#include <stdio.h>

int main() {
  //khai bao bien
  int n,i,Tong=0;
  printf("Nhap n : ");
  scanf("%d", &n);
  //Tao mang a kich thuoc n
  int a[n];
  //Nhap n phan tu cua mang a tu ban phim
  for(i = 0;i < n;i++){
  	printf("Phan tu o mang a : ");
    scanf("%d", &a[i]);
  }
  //Hien thi cac phan tu cua mang a
  printf("Cac phan tu o mang a : ");
  for(i = 0;i < n;i++){
  	printf(" %d",a[i]);
  }
  printf("\n");
  //Tinh tong cac phan tu trong mang a
  for(i = 0;i < n;i++){
  	Tong = Tong + a[i];
  }
  //Hien thi tong cac phan tu trong mang a
  printf("Tong cac phan tu trong mang a = %d",Tong);
  return 0;
}
