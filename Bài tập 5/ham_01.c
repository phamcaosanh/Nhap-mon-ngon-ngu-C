//Khối khai  báo
#include <stdio.h>
int sum(int a,int b,int c);//Khai báo hàm sum
//Khối Hàm main
int main(){
  int x = 1,y = 2,z = 3;
  printf("x + y + z = %d",sum(x,y,z));//Gọi hàm sum
  return 0;
}
//Khối định nghĩa hàm
int sum(int a,int b,int c){
  return a + b + c;
}


Nhập 3 số nguyên bất kì từ bàn phím
//Khối khai  báo
#include <stdio.h>
int sum(int a,int b,int c);//Khai báo hàm sum
//Khối Hàm main
int main(){
  int x ,y,z;
  //Nhập 3 số nguyên bất kì
  printf("Nhap 3 so nguyen\n");
  printf("x :");scanf("%d", &x);
  printf("y :");scanf("%d", &y);
  printf("z :");scanf("%d", &z);
  //Tổng 3 số nguyên
  printf("x + y + z = %d",sum(x,y,z));//Gọi hàm sum
  return 0;
}
//Khối định nghĩa hàm
int sum(int a,int b,int c){
  return a + b + c;
}

Cách 2
//Khối khai  báo
#include <stdio.h>
void sum(int a,int b,int c);//Khai báo hàm sum
//Khối Hàm main
int main(void){
  int x ,y,z;
  //Nhập 3 số nguyên bất kì
  printf("Nhap 3 so nguyen\n");
  printf("x :");scanf("%d", &x);
  printf("y :");scanf("%d", &y);
  printf("z :");scanf("%d", &z);
  sum(x,y,z);
  return 0;
}
//Khối định nghĩa hàm
void sum(int a,int b,int c){
int d = a + b +c  ;
 printf("x + y + z = %d",d);
}
