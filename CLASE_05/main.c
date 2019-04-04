#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define TAMANIO_ARRAY 3

int main()
{
    int i;
    int array[TAMANIO_ARRAY];
    /* float promedio; */
    utn_getArrayInt(array,TAMANIO_ARRAY,"numero: ","error",0,100,3);
    for(i=0; i<TAMANIO_ARRAY;i++)
    {
        printf("%d\n",array[i]);
    }
    return 0;
    /* calcularPromedio(array,TAMANIO_ARRAY,&promedio);
    printf("%f\n,promedio); */
}



