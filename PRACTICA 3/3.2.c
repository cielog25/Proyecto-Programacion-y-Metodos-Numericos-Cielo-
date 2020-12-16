#include <stdio.h>

int main(){
	int num, i, x=0, y=1, z=1;
	
	printf("Digite el numero de elementos:");
	scanf("%i", &num);
	
	printf("1,");

	for(i=1; i<num; i++){
		z = x + y;
		x = y;
		y = z;

		printf("%i,",z);
	}	
 return 0;
}
