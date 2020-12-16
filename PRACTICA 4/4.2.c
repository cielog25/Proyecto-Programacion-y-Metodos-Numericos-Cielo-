#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
 int A[5];
 int B[6];
 int i;
 srand(time(NULL));
 printf("La primer serie de números
aleatorios es: \n");
 for(i=0; i<5; i++){
 A[i]= rand()%5;
 printf("%d", A[i]);
 }
 printf("\nLa segunda serie de números
aleatorios es: \n");
 for(i=0; i<6; i++){
 B[i]= rand()%6;
 printf("%d", B[i]);
 }
}
