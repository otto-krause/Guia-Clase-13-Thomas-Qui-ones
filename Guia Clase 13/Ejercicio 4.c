#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,Pro,T[30];
    int Nota=1;
    for (a=0;a<30;a++){	
printf("Ingrese las notas del alumno %d ",Nota);
scanf("%d",&T[a]);
Nota++;
Pro=Pro+T[a];
}
Pro=Pro/30 ;
printf("\n El promedio es %d",Pro);

}

