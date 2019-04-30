#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

int menu()
{
    int opcion;
    system("cls");
    printf("1.Alta Empleado\n");
    printf("2.Baja Empleado\n");
    printf("3.Modificacion Empleado\n");
    printf("4.Ordenar Empleados\n");
    printf("5.Listar Empleados\n");
    printf("6.Informes\n");
    printf("7.Salir\n\n");
    printf("Ingrese opcion: ");
    scanf("%d", &opcion);
    return opcion;
}

void mostrarEmpleado(eEmpleados empleado)
{
    printf("%d   %d   %d\n",empleado.fechaIngreso.dia,empleado.fechaIngreso.mes,empleado.fechaIngreso.anio);
    printf("%d   %s   %c   %.2f\n",empleado.legajo,empleado.nombre,empleado.sexo,empleado.salario);
}
void mostrarEmpleados(eEmpleados empleado[], int tam)
{
    int i;
    for(i = 0; i < tam; i++) //recorro con el for todoslos empleados
    {
        if(empleado[i].isEmpty == 1) //si es 1(esta ocupado)
        {
            mostrarEmpleado(empleado[i]); //muestro al empleado
        }
    }
}
void inicializarEmpleados(eEmpleados empleado[], int tam)
{
    int i;
    for(i = 0; i < tam; i++)
    {
        empleado[i].isEmpty = 0; //si es 0 (esta desocupado) puedo cargar un empleado
    }
}
int buscarLibre(eEmpleados empleado[], int tam)
{
    int indice = -1;
    int i;
    for(i = 0; i < tam; i++) //recorre los espacios
    {
        if(empleado[i].isEmpty == 0) //si isEmpty es 0, esta desocupado
        {
            indice = i; //ya puedo cargar empleado
            break;
        }
    }
    return indice; //devuelvo 0
}
int buscarEmpleado(eEmpleados empleado[], int tam, int legajo)
{
    int indice = -1;
    int i;
    for(i = 0; i < tam; i++)
    {
        if( empleado[i].legajo == legajo && empleado[i].isEmpty == 1)
        {
            indice = i;
            break;
        }
    }
    return indice;
}
void altaEmpleado(eEmpleados empleado[], int tam)
{
    int i; //indice
    int legajo;
    int existe;
    i = buscarLibre(empleado, tam); //llamo funcion para buscar un espacio libre
    if(i == -1) //si es -1 es que esta ocupado
    {
        printf("No hay lugar");
    }
    else
    { //si es diferente a -1 pido que ingrese un legajo porque esta libre
        printf("Ingrese legajo: ");
        fflush(stdin);
        scanf("%d",&legajo); //guardo legajo
        existe = buscarEmpleado(empleado, tam, legajo); //llamo a buscarEmpleado para ver si ya existe ese legajo
        if(existe == -1) //si no existe
        {
        empleado[i].legajo = legajo; //cargo el legajo que ingreso
        printf("Ingrese sector: ");
        scanf("&d",&empleado[i].idSector.codigoSector);
        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(empleado[i].nombre); //pide un string
        printf("Ingrese apellido: ");
        fflush(stdin);
        gets(empleado[i].apellido);
        printf("Ingrese sexo: ");
        fflush(stdin);
        scanf("%c", &empleado[i].sexo);
        printf("Ingrese salario: ");
        scanf("%f", &empleado[i].salario);
        printf("Ingrese la fecha dd mm aaaa.\n");
        scanf("%d %d %d",&empleado[i].fechaIngreso.dia,&empleado[i].fechaIngreso.mes,&empleado[i].fechaIngreso.anio);
        empleado[i].isEmpty = 1; //una vez ingresado todo lo guardo como ocupado
        printf("\nEmpleado registrado con exito.\n\n");
        }
        else
        {
        printf("Ya existe un empleado con el legajo %d\n", legajo);//si ya existe ese num de legajo
        mostrarEmpleado(empleado[existe]);//muestro el empleado existente
        }
    }
}
