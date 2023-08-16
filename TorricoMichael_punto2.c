#include <stdio.h>
#include <stdlib.h>
int perimetro(int a,int b){
	return 2*a+2*b;
}
int area(int a, int b){
	return a*b;
}
int main( ) {
int base,altura,p,a;	

printf("ingrese la base: \n");
scanf("%d",&base);
printf("ingrese la altura: \n");
scanf("%d",&altura);
	p=perimetro(base,altura);
	a=area(base,altura);
	printf("area es :%d\n",a);
	printf("perimetro es: %d\n",p);
	return 0;
}
