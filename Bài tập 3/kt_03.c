// in ra các số lẻ từ 1 đến 20 ngoại trừ các số 5, 11, 15 dung while
#include <stdio.h>
int main(){
  int a,n = 0;
  while(n<20){
  n=n+1;
    if(a=n%2){
    if(n!=5){
    if(n!=11){
    if(n!=15)
    printf("%d ",n);
  }
  }
  }
  }
  return 0;
}


//in ra các số lẻ từ 1 đến 20 ngoại trừ các số 5, 11, 15 dung for
#include <stdio.h>
int main(){
  int a,n = 0;
  for(;n<20;){
  n=n+1;
    if(a=n%2){
    if(n!=5){
    if(n!=11){
    if(n!=15)
    printf("%d ",n);
  }
  }
  }
  }
  return 0;
}
