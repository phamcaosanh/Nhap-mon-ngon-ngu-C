#include <stdio.h>
int main(){
  int n;
  int s = 0;
  scanf("%d",& n);
  while(n!=0){
    s = s +n%10;
    n=n/10;
  }
  printf("s=%d",s);

  return 0;
}

***Cách khác

#include <stdio.h>
int main(){
  int n;
  int s = 0;
  scanf("%d",& n);
  for(;n!=0;n=n/10)
  s = s +n%10;
  printf("s=%d",s);

  return 0;
}
