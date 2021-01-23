#include <stdio.h>


int main() {
//khai bao bien
int a,b,c;
//Nhap 3 so a,b,c bat ki tu ban phim
printf("Nhap 3 so bat ki tu ban phim : \n");
printf("a : ");scanf("%d", &a);
printf("b : ");scanf("%d", &b);
printf("C : ");scanf("%d", &c);
//dieu kien va xuat ra man hinh so lon nhat
if(a<b && b<c){printf("So lon nhat %d",c);}
if(a<c && c<b){printf("So lon nhat %d",b);}
if(b<c && c<a){printf("So lon nhat %d",a);}
  return 0;
}
