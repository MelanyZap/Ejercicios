#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED
int utn_isValidNumber(char *cadena);
int utn_getString(char *pResultado,char *msg,char *msgError,int minimo, int maximo, int reintentos);
int utn_getNumber(char *pResultado,char *msg,char *msgError,int minimo, int maximo, int reintentos);
#endif // STRING_H_INCLUDED
