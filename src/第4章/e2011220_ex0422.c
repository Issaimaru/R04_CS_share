#include <stdio.h>

int main(void){
  for(int i=-1;i<10;i++){
    for(int j=1;j<10;j++){
      if(i==-1){
	if(j==1)printf(" %3c",'|');
	printf("%2d ",j);
      }else if(i==0){
	printf("---");
	if(j==1)printf("+---");
      }
      else{
	if(j==1)printf(" %d%2c",i,'|');
	printf("%2d ",i*j);
      }
    }
    printf("\n");
  }

  return 0;
}
