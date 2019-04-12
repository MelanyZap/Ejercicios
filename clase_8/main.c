#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"
#define LEN_LISTA 100

int utn_buscarLibre(char lista[][20],int *pIndex,int maximo);
int utn_buscarNombre(char* pNombre, char lista[][20], int len, int* pIndex);

int main()
{
    /*char nombres[100][20];

    strncpy(nombres[0],"toto",20);//destino, origen, maximo
    strncpy(nombres[1],"toto",20);

    printf("nombre:%s\n",nombres); //imprimo el nombre guardado
    printf("nombre:%s\n",nombres);
    */
    /*
    strncpy(nombres[0]"\0",20);
    nombres[0][0] = '\0'; //para poner '\0' en la primera posicion
    nombres[1][0] = '\0';
    */
    char nombres[LEN_LISTA][20];
    int i;
    int posLibre;
    char opcion;
    char buffer=0;
    int posAeliminar;
    //Inicializacion
    for(i=0;i<LEN_LISTA;i++)
    {
        nombres[i][0] = '\0';
    }
    //
    while(1)
    {
        utn_getNumber(&opcion,"1)ingresa\n2)listar\n","NO!",1,10,2);
        printf("elegiste:%d\n",opcion);
        switch(opcion)
        {
            case 1:
            {
                printf("agregar nombre\n");
                if(utn_buscarLibre(nombres,&posLibre,LEN_LISTA)==0)
                {
                    printf("1.se encontro lugar en: %d",posLibre);
                    fgets(buffer,20,stdin);
                    //utn_getString(buffer,"Ingrese:","NO!",0,20,1);
                    printf("se ingreso: %s\n",buffer);
                    printf("2.se encontro lugar en: %d",posLibre);
                    strncpy(nombres[posLibre],buffer,20);

                    for(i=0;i<10;i++)
                    {
                        printf("-%d: %s\n",i,nombres[i]);
                    }
                }
                break;
            }
            case 4:
            {
                //PIDO NOMBRE
                //utn_getString(buffer,)
                fgets(buffer,20,stdin);
                //en buffer esta el nombre
                utn_buscarNombre(buffer,nombres,LEN_LISTA,&posAeliminar);

                //borro
                nombres[posAeliminar][0] = '\0';

                break;
            }
        }
    }
}
int utn_buscarLibre(char lista[][20],int *pIndex,int maximo)
{
        int i;
        int ret=-1;
        for(i=0;i<LEN_LISTA;i++)
        {
            if(lista[i][0] == '\0') //[i]posicion del array, [0] posicion de la primera letra. Si las posiciones de la lista estan vacias('\0')
            {
                *pIndex=i;
                ret=0; //esta todo bien
                break;
            }
        }
    return ret;
}
int utn_buscarNombre(char* pNombre, char lista[][20], int len, int* pIndex)
{
    int i;
    int ret = -1;
    for(i=0;i<len;i++)
    {
        if(strcmp(pNombre,lista[i])==0)
        {
            *pIndex = i;
            ret=0;
            break;
        }
    }
    return ret;
}
