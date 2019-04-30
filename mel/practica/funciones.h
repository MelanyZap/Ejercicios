#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
typedef struct{
int dia;
int mes;
int anio;
}eFecha;

typedef struct{
int codigoMenu;
char descripcionMenu[51];
float importe;
}eMenu;

typedef struct{
int codigoSector;
char descripcionSector[51];
}eSector;

typedef struct{
int legajo;
char nombre[51];
char apellido[51];
char sexo;
float salario;
eFecha fechaIngreso;
eSector idSector;
int isEmpty;
}eEmpleados;

typedef struct{
int codigoAlmuerzo;
eMenu idMenu;
eEmpleados idLegajo;
eFecha fechaAlm;
}eAlmuerzo;

#endif // FUNCIONES_H_INCLUDED
