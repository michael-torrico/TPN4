#include <stdio.h>
#include <stdlib.h>
float pe(int a,int b){
	return a/b;
}

int main( ) {
float presion,fuerza,area;	

printf("ingrese la fuerza: \n");
scanf("%f",&fuerza);
printf("ingrese el area: \n");
scanf("%f",&area);
	presion=pe(fuerza,area);
	printf("presion es: %.2f\n",presion);
	return 0;
}
