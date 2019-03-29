#include <stdio.h>
#include <stdlib.h>


void utn_pruebita(void)
{
    printf("Hola mundo desde utn.c\n");
}
void utn_sarasa(void)
{
    printf("hola mundo desde utn.c\n");
}

int utn_getNUmber(int* punteroNumero, int max,int min,char* msg,char* msgError,int intentosMax)
{
    int numero;
    int intentos=0;
    int ret=-1;
    printf("%s",msg);
    scanf("%d",&numero);
    while(intentos<intentosMax){
        printf("%s",msg);
        if(scanf("%d",&numero)==1){
        }
        if (numero>min && numero<max)
        {   //BIEN
            *punteroNumero=numero;
            ret=0;
            break;
        }
        printf("%s",msgError);
        intentos++;
    } //fin del while
        return ret;
}


