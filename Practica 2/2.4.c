#include<stdio.h>
#include<math.h>
	
int main(){
	int opcion;
	float resultado, sueldo;

	
printf("seleccione una opcion\n");
printf("1.- Soltero menor a 32,000 pesos mensuales\n");
printf("2.- Soltero mayor a 32,000 pesos mensuales\n");
printf("3.- Casado menor a 64,000 pesos emnsuales\n");
printf("4.- Casado mayor a 64,000 pesos mensuales\n");
scanf("%d", &opcion );


switch (opcion){

    case 1:
    	printf("ingrese sueldo mensual\n");
        scanf("%f", &sueldo);
       if(sueldo>0 & sueldo<=32000) {
        resultado=(sueldo*10)/100;
        printf("El total de impuestos a pagar es de:%.2f",resultado);
    }
    else{
    	printf("El sueldo debe ser mayor a 0 y menor que 32000");
	}
    
        break;
    case 2:
    		printf("ingrese  sueldo mensual\n");
        scanf("%f", &sueldo);
       if(sueldo> 32000) {
        resultado=(sueldo*10)/100;
        printf("El total de impuestos a pagar es de:%.2f",resultado);
    }
    else{
    	printf("el sueldo debe ser mayor a 32000");
	}
        break;
     case 3:
     		printf("ingrese sueldo mensual\n");
        scanf("%f", &sueldo);
       if(sueldo>0 & sueldo<=64000) {
        resultado=(sueldo*10)/100;
        printf("total de impuestos a pagar es de:%.2f",resultado);
    }
    else{
    	printf("el sueldo debe ser mayor a 0 y menor que 64000");
	}
         break;
	case 4:
		
    	printf("ingrese el sueldo mensual\n");
        scanf("%f", &sueldo);
       if(sueldo>64000) {
        resultado=(sueldo*10)/100;
        printf("total de impuestos a pagar es de:%.2f",resultado);
    }
    else{
    	printf("el sueldo debe ser mayor a 64000");
	}
		break;
    default:
	   printf("La opcion no es valida");
	   break;		
     
    
return 0;

   }
}