#include <stdio.h>
#include <stdlib.h>
#include "Persona.h"
#include <string.h>
#define CANT 3

int main()
{
    ePersona pers[CANT];

    alta(pers,CANT);

    ordenar(pers,CANT);

    system("cls");

    mostrarTodos(pers,CANT);

    return 0;
}
