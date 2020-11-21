#include <stdio.h>
#include <stdlib.h>
int main(){
	int x,NumMayor=0,NumMenor=0,Num[2];
	for (x=0;x<2;x++){
	printf("Ingrese un numero ");
	scanf("%d",&Num[x]);};
		
for (x=0;x<2;x++){
	if (NumMayor<Num[x])
       NumMayor=Num[x]; 	     
}
   NumMenor=NumMayor;
for (x=0;x<2;x++){  
   if (NumMenor>Num[x])
       NumMenor=Num[x];}
       
    int i=NumMenor;
    while (NumMayor>=i){
        printf("\n%d",i);
        i=i+1;}
   return 0;
	}

