#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int utn_isValidNumber(char *cadena)
{
    //para recorrer cualquier string.
    int retorno = 1;
    int i=0;
    if(cadena[i]=='-')
    {
        i++;
    }
    for(;cadena[i]!='\0';i++) //Inicio en la condicion de corte(segundo espacio).
    {
        if(cadena[i] < '0' || cadena[i] > '9')
        {
            retorno = 0; //0 quiere decir que esta mal. InvalidNumber.
            break;
        }
    }
    return retorno;
}

int utn_getString(char *pResultado,char *msg,char *msgError,int minimo, int maximo, int reintentos)
{
    char bufferStr[4000];

    printf("%s",msg);
    fgets(bufferStr,sizeof(bufferStr),stdin);
    bufferStr[strlen(bufferStr)-1] = '\0';
    strncpy(pResultado,bufferStr,4000);
    return 0;
}

int utn_getNumber(char *pResultado,char *msg,char *msgError,int minimo, int maximo, int reintentos)
{
    int retorno = -1; //-1 (esta todo mal) hasta que se compruebe lo contrario(0).
    char bufferStr[4000];
    int bufferInt;
    if( pResultado != NULL &&
        reintentos >= 0) //FALTAN
    {
    while(reintentos!=0)
    {
        if(!utn_getString(bufferStr,msg,msgError,1,6,1) &&
            utn_isValidNumber(bufferStr)) //Es lo mismo que if(!getString(bufferStr,msg,msgError,1,6,1)==0)
        {
            bufferInt = atoi(bufferStr); //transforma un array en entero
            if(bufferInt >= minimo && bufferInt <= maximo)
            {
                *pResultado = bufferInt;
                retorno = 0;
                break;
            }
        }
        reintentos--;
    }
    }
    return retorno;
}
