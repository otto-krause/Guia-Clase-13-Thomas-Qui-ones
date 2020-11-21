#include <stdio.h>
#include <stdlib.h>
int main(){
    int a=0,Num[2],S;
    Num[1]=1;
    Num[2]=1;
    printf(" %d ",Num[1]);
    printf(" %d ",Num[2]);
  while(a<1){
  	S=Num[1]+Num[2];
  	printf(" %d ",S);
  	Num[2]=Num[1];
  	Num[1]=S;

  }
}



