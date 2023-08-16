#include <stdio.h>
#include <stdlib.h>
float octava(float a) {
	return a/8;
}
int main(){
	float num,num8;
	printf("ingrese un num:");
	scanf("%f",&num);
	num8=octava(num);
	printf("la octava parte del numero es:%.2f\n",num8);
	system("pause");
	return 0;
}
