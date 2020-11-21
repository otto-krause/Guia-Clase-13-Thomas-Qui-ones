#include <stdio.h>
#include <stdlib.h>


int main()
{
	int Num[10],x=0,Suma=0,Producto=1,EleDebPro=0;
	float Pro=0;
	printf("ingrese 10 numeros ");
	for(x=0;x<10;x++){
		scanf("%d",&Num[x]);
		Suma=Suma+Num[x];
		Producto=Producto*Num[x];
	}
	Pro=Suma/10;
	
	for(x=0;x<10;x++){
	if(Num[x]<Pro){
		EleDebPro=EleDebPro+1;
	}
     }
     printf("\n la suma de los numeros ingresados es %d ",Suma);
      printf("\n el producto de los numeros ingresados es %d ",Producto);
       printf("\n el promedio de todos los numeros es %f y la cantidad de elementos que estan por debajo del son %d ",Pro,EleDebPro);
     return 0;
}

