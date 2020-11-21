#include <stdio.h>
#include <stdlib.h>
int main(){
int x,NumPro=0,Num[5],NumM;
for (x=0;x<5;x++){
printf("Ingrese los numeros ");
scanf("%d",&Num[x]);

if (NumM<Num[x]){
NumM=Num[x];};
}

for (x=0;x<5;x++){

NumPro=NumPro+Num[x];
}
NumPro=NumPro/5 ;
printf("\n El promedio es %d",NumPro);
printf("\n El numero mas grande es %d",NumM);
return 0;
}
