#include <stdio.h>

int main(){
	// khai bao bien
	int dongia,soluong ;
	float thanhtien;
	printf("Nhap soluong =");
	scanf("%d", &dongia);
	printf("Nhap dongia =");
	scanf("%d", &soluong);
	thanhtien=soluong*dongia;
	// dieu kien
	
	if(soluong>=5 ){
	thanhtien=(soluong*dongia)*0.75;
	printf("%0.1f",thanhtien);
	}
	else {printf("%d",thanhtien);}	
  getchar();
  return 0;
}
