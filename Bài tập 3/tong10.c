#include <stdio.h>

int main() {
	int tong,i;
	
	for (i = 1,tong = tong + i;i < 11,tong < 11; ++i,++tong)
	{
	  printf("\n%d + %d = %d",i,tong,i+tong);	
	}
	
    return 0;
}
