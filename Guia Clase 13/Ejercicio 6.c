#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,SMas=0,SMenos=0,Sueldo[20];
    for (a=0;a<20;a++){
printf("Ingrese el sueldo ");
scanf("%d",&Sueldo[a]);
if(Sueldo[a]>2000){
	SMas=SMas+1;
}else{SMenos=SMenos+1; }

}


printf("\n %d ganan mas de 2000 ",SMas);
printf("\n %d ganan menos de 2000",SMenos);

}

