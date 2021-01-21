#include <stdio.h>

int main() {
  //khai bao bien
  int n,i,m,j,phantu=0;
  printf("Nhap n : ");
  scanf("%d", &n);
  //Tao mang a kich thuoc n
  int a[n];
  //Nhap n phan tu cua mang a tu ban phim
  for(i = 0;i < n;i++){
  	printf("Phan tu o mang a[%d] : ",i);
    scanf("%d", &a[i]);
  }
  //Hien thi cac phan tu cua mang a
  printf("Cac phan tu o mang a : ");
  for(i = 0;i < n;i++){
    printf(" %d",a[i]);
  }
  printf("\n");
  //Nhap so nguyen m bat ki tu ban phim
  printf("Nhap m : ");
  scanf("%d", &m);
  for(i = 0;i < n;i++){
    if(a[i] == m){
      j+=1;
      break;
    }
    }
  //Kiem tra so nguyen 
  if(j > 0){printf("Co ton tai");
  }
  else(printf("Khong ton tai"));
  return 0;
}
