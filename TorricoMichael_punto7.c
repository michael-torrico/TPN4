#include <stdio.h>
#include <stdlib.h>
int funcion(int a,int b) {
	if(a>b) {
		return a;
	}else{if (b>a){return b;} else return 0;}
}
int main(){
	int num1,num2,c;
	printf("ingrese un num:");
	scanf("%d",&num1);
	printf("ingrese un num:");
	scanf("%d",&num2);
	c=funcion(num1,num2);
	if(c==0){printf("son iguales\n");}else{
		if(c==num1){printf("%d es mayor\n",num1);}else{
			if(c==num2){printf("%d es mayor\n",num2);}
		} 
	}
	system("pause");
	return 0;
}
