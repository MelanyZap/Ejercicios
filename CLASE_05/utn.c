#include <stdio.h>


int utn_getNUmber(int* pNumero, int max, int min, char* msgPregunta, char* msgError, int intentosMax)
{
    int auxNum;
    int execution = -1;
    int boolean = -1;
    printf("%s", msgPregunta);
    while(intentosMax>0){

        if(scanf("%d", &auxNum) == 0){ // es num?
            if(auxNum > min && auxNum < max){
                *pNumero = auxNum;
                break;
            }
        }
        printf("%s", msgError);
        intentosMax--;
    }//TERMINAR USANDO BREAK
/*
    if(*pNumero > min && *pNumero < max){
        execution = 0;
    }else{
        while(boolean == -1 && intentosMax>0){
            printf("%s", msgError);
            scanf("%d", pNumero);
            if(*pNumero > min && *pNumero < max){
                boolean = 0;
                execution = 0;
            }
            intentosMax--;
        }
    }

*/
    return execution;
}

int utn_getArrays(int* pArrays, int max, int min, char* msgPregunta, char* msgError, int intentosMax))
{
    int numero[];
    int i;


}
