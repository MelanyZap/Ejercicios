#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Persona.h"
//1 verdadero 0 falso
void alta(ePersona pers[],int cantidad )
{
    int i;

    for(i = 0; i < cantidad; i++)
    {
        printf("\nApellido: ");
        fflush(stdin);
        scanf("%s", pers[i].apellido);
        strlwr(pers[i].apellido);

        printf("\nNombre: ");
        fflush(stdin);
        scanf("%s", pers[i].nombre);
        strlwr(pers[i].apellido);

        printf("\nEdad: ");
        scanf("%d", &pers[i].edad);

        printf("\nSexo: ");
        scanf("%s", pers[i].sexo);
        strlwr(pers[i].apellido);

        printf("\nDia de nacimiento: ");
        scanf("%d",&pers[i].diaNac.dia);

        printf("\nMes de nacimiento: ");
        scanf("%d",&pers[i].mesNac.mes);

        printf("\nAño de nacimiento: ");
        scanf("%d",&pers[i].anioNac.anio);

        pers[i].isEmpty = 0;
    }
}

void mostrarTodos(ePersona pers[], int cantidad)
{
    int i;

    for(i = 0; i < cantidad; i++)
    {
        mostrarUno(pers[i]);
    }
}

void mostrarUno(ePersona per)
{
    printf("\n%s\t%s\t%d\t%d\t%d\t%d\t%d\t\n", per.apellido, per.nombre, per.edad, per.diaNac.dia,
           per.mesNac.mes,per.anioNac.anio, per.isEmpty);
}

void ordenar(ePersona pers[],int cantidad)
{
    int i,j;
    ePersona aux;
    for(i=0;i<cantidad-1;i++)
    {
        for(j=i+1;j<cantidad;j++)
        {
            if(strcmp(pers[i].apellido,pers[j].apellido)>0)
            {
                aux = pers[i];
                pers[i] = pers[j];
                pers[j] = aux;
            }
        }
    }
}
int buscarPorDni(ePersona pers[], int cantidad, int dniAux)
{
    int retorno = -1;
    int i;
    for()
    {
        if()
        {
            retorno = i;
            break;
        }
    }
    return retorno;
}
