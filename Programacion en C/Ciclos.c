#include <stdio.h>
  
int main()
{
    
    printf("Ciclo for\n");  
    for (int i = 1; i <= 10; i++)
    {
        printf( "%d\n",i);    
    }

    printf("Ciclo while\n");
    int j= 1;
    while (j <= 10)
    {
        printf( "%d\n",j);    
        j++;
    }

    printf("Ciclo do while\n");
    int k = 1;
    do
    {
        printf( "%d\n",k);    
        k++;
  
    }  while (k <= 10); 
  
    return 0;
}