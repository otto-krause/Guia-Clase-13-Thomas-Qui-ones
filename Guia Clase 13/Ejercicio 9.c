#include <stdio.h>
#include <stdlib.h>
int main(){
    int Num,Num2,Num3,ma=1,me=1,Numero[3],Suma;
    Numero[Num]=0;
    Numero[Num2]=0;
    Numero[Num3]=0;
    printf(" ingrese 3 numeros ");
    scanf("%d",&Numero[Num]);
    scanf("%d",&Numero[Num2]);
    scanf("%d",&Numero[Num3]);
    Suma=Numero[Num]+Numero[Num2];
    if(Numero[Num]<Numero[Num2] and Numero[Num]<Numero[Num3] and Numero[Num2]<Numero[Num3])
	{
    printf("\n se ingresaron ascendientemente");
    }
	else
	{if(Numero[Num]>Numero[Num2] and Numero[Num]>Numero[Num3] and Numero[Num2]>Numero[Num3])
	{
	printf("\n se ingresaron descendientemente");
	}
	else
	{
	printf("\n se ingresaron desordenadamente");	
	}			
	}
	printf("\n la suma del primero y el ultimo es %d",Suma);
  }




