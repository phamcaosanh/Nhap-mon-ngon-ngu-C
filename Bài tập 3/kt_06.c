#include <stdio.h>

int main(){
  int h;
  printf("h = %d",h);
  scanf("%d",&h);
  switch(h){
  	case 1:
      //h = 1
      //hang 1,1 *,0 khoang trang
  		printf("*");//hang1
  		break;
  	case 2:
      //h = 2
      //hang 1,1 *,1 khoang trang
      //hang 2,3 *,0 _____//_____
  		printf("  * \n");//hang1
  		printf("* * *");//hang2
  		break;
  	case 3:
      //h=3
      //hang 1,1 *,2 khoang trang
      //hang 2,3 *,1 _____//_____
      //hang 3,5 *,0 _____//_____
  		printf("    * \n");//hang1
  		printf("  * * * \n");//hang2
  		printf("* * * * *");//hang3
  		break;
  	default:
      //h = 4
      //hang 1,1 *,3 khoang trang
      //hang 2,3 *,2 ____//______
      //hang 3,5 *,1 ____//______
      //hang 4,7 *,0 ____//______
  		printf("      *  \n");//hang1
  		printf("    * * * \n");//hang2
  		printf("  * * * * *\n");//hang3
  		printf("* * * * * * *");//hang4
  }
  getchar();
  return 0;
}


**Cây thông

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
      printf("           *  \n");
      printf("    ***  *****  *** \n");
      printf("      ** * * * **               \n");
      printf("        ** * **         \n");
      printf("       *       *      \n");
  		printf("           *  \n");
  		printf("         * * * \n");
  		printf("       * * * * *\n");
  		printf("     * * * * * * *\n");
      printf("   * * * * * * * * *\n");
      printf("       * * * * *\n");
  		printf("     * * * * * * *\n");
      printf("   * * * * * * * * *\n");
      printf("       * * * * *\n");
  		printf("     * * * * * * *\n");
      printf("   * * * * * * * * *\n");
      printf("* * * * * * * * * * * * \n");
      printf("       ********                  \n");
      printf("       ********                  \n");
      printf("       ********                  \n");
      printf("       ********                  \n");
      printf("       ********       * * * *      \n");
      printf("    **************   *    * *      \n");
      printf("    **************  ******  *          \n");
      printf("    **************  ****** *           \n");
      printf("    **************  ******             \n");
      printf("    **************               \n");
    }
  getchar();
  return 0;
}
