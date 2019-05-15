#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mostrarCadena(char* punteroCadena);
void mostrarCadena2(char* punteroCadena);

int main()
{
    char *punteroCadena;
    char vec[10] = "Hola";
    punteroCadena= vec;
    mostrarCadena(punteroCadena);
    printf("\n\n");
    mostrarCadena2(punteroCadena);
    return 0;
}
void mostrarCadena(char* punteroCadena)
{
    while(*punteroCadena != '\0')
    {

        printf("%c %p",*punteroCadena,punteroCadena); //Todas las direcciones dememoria van cambiando
        punteroCadena++;
    }
}
void mostrarCadena2(char* punteroCadena)
{
    int i;
    for (i = 0;i < 10; i++)
    {
        printf("%c %p",*(punteroCadena + i),&punteroCadena); //Todas las direcciones de memoria son iguales
    }
}
