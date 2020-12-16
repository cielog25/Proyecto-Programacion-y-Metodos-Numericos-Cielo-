/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
    float estatura, peso, IMC;
    int edad;
    char nombre[20];
    printf("Hola buen dia, ingresa tu nombre");
    scanf("%s", &nombre);
    printf("Ahora ingresa tu edad");
    scanf("%d", &edad);
    printf("Ahora ingresa tu peso");
    scanf("%f", &peso);
    printf("Por ultimo ingresa tu estatura");
    scanf("%f", &estatura);
    IMC = peso / (estatura * estatura);
    printf("\nTu nombre es %s \nTu edad es de %d \n Su peso es de %.2f \nsu IMC: %f", nombre, edad, peso, IMC);

    return 0;
}
