#include <stdio.h>

int main() {
	int a = 5,b = 2;
	char pt;
	printf("Vui long nhap phep tinh(+,-): ");
	scanf("%c", &pt);
	switch(pt)
    {
        case '+':
            printf("5 + 2 = %d",a+b);
            break;

        case '-':
            printf("5 - 2 = %d",a-b);
            break;
        default:
            printf("Loi! toan tu  khong dung");
    }
	getchar();
  return 0;
}
