#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,Vend,VM,Total,rt[20];
    int UV=1;
    for (a=0;a<20;a++){
printf("Ingrese el total de unidades vendidas en 15 dias %d ",UV);
scanf("%d",&rt[a]);
UV++;
}
for (a=0;a<20;a++){
if (UV=1){
    VM=rt[a]/15;
    Vend=UV;
}
}
for (a=0;a<20;a++){
if ((rt[a]/15)>VM){
    VM=rt[a]/15;
    Vend=UV;
}
Total=Total+rt[a];
}


printf("\n El total es %d",Total);
printf("\n La mayor venta diaria es %d por el vendedor %d",VM,Vend);
}

