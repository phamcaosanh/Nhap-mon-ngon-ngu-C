#include <stdio.h>
//Khoi khai bao
float a,b,c;
int So_lon_nhat();
//Khoi ham main
int main() {
printf("Nhap 3 so bat ki tu ban phim : \n");
printf("a : ");scanf("%f", &a);//Nhap a tu ban phim
printf("b : ");scanf("%f", &b);//Nhap b tu ban phim
printf("C : ");scanf("%f", &c);//Nhap c tu ban phim
So_lon_nhat();
  return 0;
}
//Khoi dinh nghia ham
int So_lon_nhat(){
if(a<c && b<c){printf("%.1f",c);}
if(a<b && c<b){printf("%.1f",b);}
if(b<c && c<a){printf("%.1f",a);}
return 0;
}
