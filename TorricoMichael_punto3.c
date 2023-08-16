#include <stdio.h>
#include <stdlib.h>
float porcentaje(int a,int b){
	float total=a+b;
	return (a*100)/total;
}

int main( ) {
float mujeres,hombres,ph,pm;	

printf("ingrese la cantidad de hombres: \n");
scanf("%f",&hombres);
printf("ingrese la cantidad de mujeres: \n");
scanf("%f",&mujeres);
	ph=porcentaje(hombres,mujeres);
	pm=porcentaje(mujeres,hombres);
	printf("porcentaje de hombres: %.2f\n",ph);
	printf("porcentaje de mujeres: %.2f\n",pm);
	return 0;
}
