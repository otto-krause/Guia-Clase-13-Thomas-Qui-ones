#include <stdio.h>
#include <stdlib.h>
int main(){
int a,RT=0,R[]{1,2,3,4,5};
for (a=0;a<5;a++){
printf("Ingrese las resistencias ");
scanf("%d",&R[a]);}
for (a=0;a<5;a++){
printf("\n Las resistencias son %d",R[a]);
RT=RT+R[a];
}
printf("\n La resistencia total es %d",RT);
return 0;
}
 

