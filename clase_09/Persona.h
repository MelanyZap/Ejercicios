#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

typedef struct{
    int dia;
    int mes;
    int anio;
}eFecha;

typedef struct{
    char apellido[31];
    char nombre[31];
    char sexo[20];
    int edad;
    eFecha diaNac;
    eFecha mesNac;
    eFecha anioNac;
    int isEmpty;
}ePersona;

void alta(ePersona pers[],int cantidad);
void mostrarUno(ePersona per);
void mostrarTodos(ePersona pers[], int cantidad);
void ordenar(ePersona pers[],int cantidad);

#endif // PERSONA_H_INCLUDED
