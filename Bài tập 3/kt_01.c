#include <stdio.h>
int main() {
	//khai bao bien
	int i,j;
	printf("\n\t\tBANG CUU CHUONG");
	for(i = 1;i <= 10;i++){
		printf("\n\tBang cuu chuong %d\n",i);
		for(j = 0;j < 10;j++){
		printf("\n\t%d x %d = %d\n",i,j,i*j);
		}
	}
    return 0;

}
