#include <stdio.h>
int main(){
  int n;
  int a;
  int s = 0;
  scanf("%d",& n);
  while(n!=0){
    s = s +n%10;
    n=n/10;
  }
  printf("s=%d",s);

  return 0;
}
