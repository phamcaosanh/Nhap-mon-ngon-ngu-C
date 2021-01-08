#include <stdio.h>

int main(){
  int h;
  printf("h = %d",h);
  scanf("%d",&h);
  switch(h){
  	case 1:
  		printf("*");
  		break;
  	case 2:
  		printf(" * \n");
  		printf("***");
  		break;
  	case 3:
  		printf("     * \n");
  		printf("   * * * \n");
  		printf(" * * * * *");
  		break;
  	default:
  		printf("       *  \n");
  		printf("     * * * \n");
  		printf("   * * * * *\n");
  		printf(" * * * * * * *");
  }
  getchar();
  return 0;
}
