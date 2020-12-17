#include <stdio.h>

int main() {
	// khai bao nhieu bien
	int thang ;
	printf("Vui long nhap thang: ");
	scanf("%d", &thang);
	switch(thang)
    {   
    	case 1:
      case 3:
    	case 5:
      case 7:
      case 8:
      case 10:
      case 12:printf("31 ngay");
    		  break;
      case 2:
          printf("28 hoac 29 ngay");
          break;
      case 4:
      case 6:    		 
    	case 9:
    	case 11:
    		  printf("30 ngay");
    		  break;
      default:
          printf("Mot nam co 12 thang thoi :)) ");
    }
	getchar();
  return 0;
}
