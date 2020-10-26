//Problema 6 SAGAHON REYES ALAN 1SV2

#include <stdio.h>
int main()
{

	float a,b;

	printf("Introduzca el numero dividendo (puede ser decimal):");
	scanf("%f",&a);

	printf("\nIntroduzca el numero divisor (puede ser decimal):");
	scanf("%f",&b);

	if(b!=0){
		printf("\nEl resultado de la division es: %.2f\n",a/b);
		printf("\nTERMINO EL PROGRAMA :) \n");
	}

	else{
		printf("\nERROR\nNo se puede dividir entre cero:(\n\n");
		printf("\nTERMINO EL PROGRAMA :) \n");

	}
}
