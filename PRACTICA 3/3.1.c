#include <stdio.h>
int main() {
    int d[4], da=0;
    
do{ 
printf ("Introducir digito: ");
scanf("%i", &d[da]); da++; }
while(da<4);

if(d[0]!=d[1] && d[0]!=d[2] && d[0]!=d[3] && d[1]!=d[0] && d[1]!=d[2] && d[1]!=d[3]  &&  d[2]!=d[0] && d[2]!=d[1] && d[2]!=d[3]   && d[3]!=d[1] && d[3]!=d[2] && d[3]!=d[0]){
	
printf("Código valido\n Los digitos son: %i, %i, %i, %i", d[0],d[1],d[2],d[3]);
}

else printf("Código no valido");
        return 0;
}
