#include<stdio.h>
void Nhap_pt_mang(int a[]),Hien_thi_pt_mang(int a[]),Hien_thi_tong_chan(int a[]);
 //khoi ham main
 int n,Tong;
int main(){
  printf("Nhap n : ");
  scanf("%d", &n);
  int a[n];
  //Nhap n phan tu vao mang a
  Nhap_pt_mang(a);
  Hien_thi_pt_mang(a);
  Hien_thi_tong_chan(a);
  return 0;
}
// khoi dinh nghia ham
void Nhap_pt_mang(int a[]){
  for(int i = 0;i < n;i++){
  	printf("Phan tu o mang a thu %d : ",i);
    scanf("%d", &a[i]);
  }
}
void Hien_thi_pt_mang(int a[]){
printf("Cac phan tu o mang a : ");
  for(int i = 0;i < n;i++){
  	printf(" %d",a[i]);
 }
}
void Hien_thi_tong_chan(int a[]){
  //Tinh tong cac phan tu trong mang a
  for(int i = 0;i < n;i++){
  	Tong = Tong + a[i]%2;
  }
  //Hien thi tong cac phan tu trong mang a
  printf("\nTong cac phan tu trong mang a = %d",Tong);
}
