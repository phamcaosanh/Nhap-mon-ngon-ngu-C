#include <stdio.h>

int main(){
	// khai bao bien a
	int a ;
	printf("Nhap a =");
	scanf("%d", & a);
	// dieu kien
	if(a > 0){printf("%d duong",a);
	}else if(a == 0) {printf("a = 0",a);
	}else {printf("%d am",a);}	
	
  getchar();
  return 0;
}
