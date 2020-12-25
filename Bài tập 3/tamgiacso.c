#include <stdio.h>

int main(){
  // khai bao bien
  int n,c;
  printf("Nhap n = ");
  scanf("%d",& n);
  printf("n = %d\n\n",n);
  for(c = 1 ; c < n; c++){
  }
  // hien thi ket qua
  switch(n)
  {
    case 1:
        printf("%d",n);
        break;
    case 2:
        printf("1\n1%d",n);
        break;
    case 3:
        printf("1\n12\n12%d",n);
        break;
    default:
        printf("1\n12\n123\n123%d",n);
  }
  getchar();
  return 0;
  }
