#include<stdio.h>
#include <stdlib.h>

 int main(){
	int res, num ;

	printf("Ingresa la sifra o numero");
	scanf("%d",&num);
	res=(num%2);
	
	if(res==0){
		printf("El numero es par");
	
	}
	else{
		printf("El numero es impar");
	}	
}
