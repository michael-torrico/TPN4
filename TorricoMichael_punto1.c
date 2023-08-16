#include <stdio.h>
#include <stdlib.h>
int func(int a) {
	printf("ingrese un num: ");
	scanf("%d",&a);
	return a;
}
int main(){
	int num1,num2;
	num1=func(num1);
	num2=func(num2);
	printf("\n %d \n",num1);
	printf(" %d \n",num2);
	system("pause");
	return 0;
}
