#include <stdio.h>

int main(){
	// khai bao bien
	int dongia,soluong ;
	float thanhtien;
	printf("Nhap dongia =");
	scanf("%d", &dongia);
	printf("Nhap soluong =");
	scanf("%d", &soluong);
	thanhtien=soluong*dongia;
	// dieu kien
	
	if(soluong >= 5 & dongia >= 500 ){
	thanhtien=(soluong*dongia)*0.5;
	printf("%.f",thanhtien);
	}else {printf("%.f",thanhtien);}	
  getchar();
  return 0;
}
