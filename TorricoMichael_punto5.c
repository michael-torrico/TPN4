#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int total(int f,int g){
	return f=f+g;
}
int main(){
	char resista[50];
	char resistencias[100];
	strcpy(resista,"");strcpy(resistencias,"");
	int i=0,resisten=0,rt=0;
	for(i=1;i<=5;i++){
	printf("introduzca la resistencia nro %d\n",i);
	scanf("%s",&resista);
	resisten=atoi(resista);
	rt=total(rt,resisten);
	strcat(resistencias,resista);
	strcat(resistencias," ");
	}
	printf("resistencia total:%d \n",rt);
	printf("resistencias:%s",resistencias);

	return 0;
}	
