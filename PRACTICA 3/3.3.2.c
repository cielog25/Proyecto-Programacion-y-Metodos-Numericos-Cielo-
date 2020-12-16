#include <stdio.h>

int main()
{
    double phi=1.6;
    int i, n;
    printf("Ingrese el valor de n");
    scanf("%d",&n);
    
    for (i=1 ; i<=n; i++)
    {
        
        phi=1+1/phi;
        printf("%.10lf/n", phi);
    }
    
}
