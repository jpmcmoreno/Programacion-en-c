

#include <stdio.h>
 
int main()
{
    
    int numero = 10;
 
    int *puntero = &numero;

    printf("Valor de numero = %d\n", *puntero);
   
    printf("Direccion del numero = %p\n", puntero);
 
    return 0;
}