#include <stdio.h>

int main(){
	printf("\1\2\3\4\5\6");
	//khai bao nhieu bien
	int n,a,b;
	printf("\n\n");
	printf("Nhap n = ");
	scanf("%d",& n);
	printf("n = %d\n",n);
	for(a = 1; a <= n; a++ ){
		printf("\n");
	  for(b = 1; b <= a; b++)//vong lap ben trong
		  printf("%d",b);
	}
	getchar();
	return 0;
}
