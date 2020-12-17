#include <stdio.h>

int main() {
	// khai bao nhieu bien
	int a = 5,b = 2;
	char pt;
	printf("a = %d va b = %d",a,b);
	printf("\n");
	printf("Vui long nhap phep tinh(+,-): ");
	scanf("%c", &pt);
	switch(pt)
    {
        case '+':
            printf("a + b = %d",a+b);
            break;
        case '-':
            printf("a - b = %d",a-b);
            break;
        default:
            printf("Loi! toan tu  khong dung");
    }
	getchar();
  return 0;
}
