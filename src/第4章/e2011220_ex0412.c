/*
***********************
@Created by e2011220

@Created at 2022-05-18

***********************
*/

#include <stdio.h>
#include <math.h>
int main(void){
  int a,rev;
 start:
  printf("正の整数を入力してください:");scanf("%d",&a);
  if(a<0){puts("正でない数を入力しないでください。");goto start;}
  printf("%dを逆から読むと",a);
  while(a>0){
    rev=a%10;
    a=a/10;
    printf("%d",rev);
  }
  printf("です。");
}
