#include <stdio.h>
float  IMC, peso, estatura;

int main (){


printf("cual es la estatura de la persona en metros");
scanf("%f", &estatura);
printf("cual es el peso la persona");
scanf("%f",&peso);

	IMC = peso/(estatura*estatura);

if(IMC>0 & IMC<18.5){
	printf("bajo de peso");
      }
		else if (IMC>=18.5 & IMC<=24.9){
			printf("peso normal");
         	}
				else if(IMC>=25 & IMC<=29.4){
				printf("sobre peso");
			     }			
				    else if(IMC>=30 & IMC<=34.5){
				    printf("Obesidad tipo 1");
				    	}
				    	else if(IMC>=25 & IMC<=39.9){
							printf("Obesidad tipo 2");
				    		}
				    		else if(IMC>=40){
								printf("hiper obecidad");
								}
				    		else {
								printf("EL indice de masa corporal debe ser mayor a 0");
								}
}
