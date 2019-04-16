#include <stdio.h>
#include <stdlib.h>
#include "Persona.h"

ePersona alta(ePersona per)
{
    printf("\nIngrese nombre: ");
    fflush(stdin); //como es una cadena de caracteres necesita limpiar el buffer
    scanf("%s",per.nombre);

    printf("\nIngrese apellido: ");
    fflush(stdin);
    scanf("%s",per.apellido);

    printf("\nIngrese edad: ");
    scanf("%d",&per.edad);

    per.isEmpty = 0;//falso porque el usuario SI ingreso algo.

    return per;
}

   void mostrar(ePersona per)
    {
        printf("%s %s %d %d",per.nombre,per.apellido,per.edad,per.isEmpty);
    }


