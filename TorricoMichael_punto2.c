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
	//p=perimetro(base,altura); Se puede realizar la llamada en el prinf
	//a=area(base,altura);
	printf("area es :%d\n",area(base,altura));
	printf("perimetro es: %d\n",perimetro(base,altura));
	return 0;
}
