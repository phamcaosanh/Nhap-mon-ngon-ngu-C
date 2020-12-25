#include <stdio.h>

int main(){
  int n,c,sum=0;
  printf("Nhap n =");
  scanf("%d",& n);
  printf("n = %d\n",n);
  for(c = 1; c <= n; c++){
  sum +=c ;
  }
  switch(n)
    {
        case '1':
            printf("s = %d",sum,n);
            break;
        case '2':
            printf("s = 1 + %d = %d",n,sum);
            break;
        case '3':
	     printf("s = 1 + 2 + %d = %d",n,sum);
	     break;
	case '4':
             printf("s = 1 + 2 + 3 + %d = %d",n,sum);
	     break;	    
        default:
            printf("s = 1 + 2 +...+%d = %d",n,sum);
    }

  getchar();
  return 0;
}
