#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

typedef struct{
    char apellido[31];
    char nombre[31];
    int edad;
    int isEmpty;
}ePersona;

void alta(ePersona pers[], int cantidad);
void mostrarUno(ePersona per);
void mostrarTodos(ePersona pers[], int cantidad);

#endif // PERSONA_H_INCLUDED
