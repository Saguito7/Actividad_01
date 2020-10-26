//Problema 4 SAGAHON REYES ALAN 1SV2

#include <stdio.h>
#include <math.h>

int main()
{
	float a,b,c;

	printf("\nIntroduzca el valor de 'a':");
	scanf("%f",&a);
	printf("\nIntroduzca el valor de 'b':");
	scanf("%f",&b);
	printf("\nIntroduzca el valor de 'c':");
	scanf("%f",&c);
	printf("\n\nLa operacion a realizar es:\n");
	printf("\n(a)x^2+(b)x+c=0\n\n");

	if((((b*b)-(4*a*c)))<0){
		printf("\nERROR\nNO HAY RAICES NEGATIVAS\n");
		printf("\nTERMINO EL PROGRAMA :) \n");
	}

	if((((b*b)-(4*a*c)))==0){
		printf("\nExiste una sola solucion:");
		printf("\nX=%.2f",(((-b)+(sqrt(((b*b)-(4*a*c)))))/(2*a)));
        printf("\nTERMINO EL PROGRAMA :) \n");;
	}

	if((((b*b)-(4*a*c)))>0){
		printf("\nLas dos soluciones son (x1 y x2):\n");
		printf("\nX1=%.2f\n",(((-b)+(sqrt(((b*b)-(4*a*c)))))/(2*a)));
		printf("\nX2=%.2f\n",(((-b)-(sqrt(((b*b)-(4*a*c)))))/(2*a)));
		printf("\nTERMINO EL PROGRAMA :) \n");
	}


}
