//Khối khai  báo
#include <stdio.h>
int sum(int a,int b,int c);//Khai báo hàm sum
//Khối Hàm main
int main(){
  int x = 1,y = 2,z = 3;
  printf("x + y + z = %d",sum(x,y,z));
  return 0;
}
int sum(int a,int b,int c){
  return a + b + c;
}
