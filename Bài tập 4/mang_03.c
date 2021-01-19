#include <stdio.h>

int main() {
  //khai bao bien
  int n,i,Sochan = 0,Sole = 0,So0 = 0;
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
  	printf(" %d",a[i]);}
  //Hien thi cac so chan tu mang a
  printf("\nCac so chan tu mang a : ");
  for(i = 0;i < n; i++){
    if(a[i]  %2 == 0 && a[i] > 0){
    printf(" %d ",a[i]);
    Sochan+=1;
  }}
  //Hien thi cac so le tu mang a
  printf("\nCac so le tu mang a :  ");
  for(i = 0;i < n; i++){
    if(a[i] %2 != 0){
    printf(" %d ",a[i]);
    Sole+=1;
  }}
  for(i = 0;i < n; i++){
    if(a[i]  == 0){
    So0+=1;
  }}
  //Dem cac so chan,le,so 0 tu mang a
  printf("\nSo chan : %d\nSo le : %d\nSo 0 : %d",Sochan,Sole,So0);
  return 0;
}
