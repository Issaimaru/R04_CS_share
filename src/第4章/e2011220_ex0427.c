#include <stdio.h>

int main(void){
  int width;
  puts("左下直角二等辺三角形を作ります。");
  printf("短辺:");scanf("%d",&width);

  for(int i=1;i<=width;i++){
    for(int j=1;j<=i;j++){
      putchar('*');
    }
    putchar('\n');
  }
  return 0;
}
