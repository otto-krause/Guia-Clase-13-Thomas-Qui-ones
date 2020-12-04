#include <stdio.h>
#include <stdlib.h>
//Falta función.
int main()
{
int a,RT=0,R[5]{0};
for (a=0;a<5;a++)
{
printf("Ingrese las resistencias ");
scanf("%d",&R[a]);}
for (a=0;a<5;a++)
{
printf("\n Las resistencias son %d",R[a]);
RT=RT+R[a];
}
printf("\n La resistencia total es %d",RT);
return 0;
}
 

