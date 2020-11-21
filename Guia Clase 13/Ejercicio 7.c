#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,Alumno[15],Nota=1;
    for (a=0;a<15;a++){
printf("\n Ingrese la nota del alumno, %d ",Nota);
scanf("%d",&Alumno[a]);
if(Alumno[a]>8){
printf("\n alumno %d tiene nota con mas de ocho",Nota);
}
Nota++;	
}
 }



