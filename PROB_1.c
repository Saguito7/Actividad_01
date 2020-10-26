//Problema 1 SAGAHON REYES ALAN 1SV2

#include <stdio.h>
#include <conio.h>
int main()
{

	float a,b;

	printf("INGRESE UN NUMERO :");
	scanf("%f",&a);
	printf("\nINGRESE UN SEGUNDO NUMERO:");
	scanf("%f",&b);

	if(a>b){
		printf("\n\nEl numero mayor es %.1f ", a);
		printf("\n\nFIN DEL PROGRAMA");
	}

	if(b>a){
		printf("\nEl numero mayor es %.1f", b);
		printf("\n\nTERMINO EL PROGRAMA :)");

	}

	if(a==b){
		printf("\nLos numeros ingresados son iguales");
		printf("\n\nTERMINO EL PROGRAMA :)");


	}
}
