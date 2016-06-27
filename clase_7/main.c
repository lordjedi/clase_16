#include <stdio.h>
#include <stdlib.h>
#include "input.h"
#define MAX_PERSONAS 200
void initLegajo(int*, int);
int buscarLibre(int*, int);

int main()
{
    char nombre[MAX_PERSONAS][18];
    char apellido[MAX_PERSONAS][18];
    int legajo[MAX_PERSONAS];
    int auxLegajo;
    char auxChar[30];
    int auxint;
    char respuesta = '0';
    int i, indice;

    initLegajo(legajo, MAX_PERSONAS);

    while(respuesta != '5')
    {
        printf("1-ALTA\n2-BAJA\n3-MODIFICACIONES\n4-IMPRIMIR");
        scanf(" %c", &respuesta);

        switch(respuesta)
        {
            case '1':
                indice = buscarLibre(legajo, MAX_PERSONAS);
                printf("%d", indice);

                do
                {
                    auxint = getInt(&auxLegajo, "Ingrese el legajo: ", "ERROR: legajo no valido", 0, 201);

                }while(auxint!=0);
                legajo[indice] = auxLegajo;

                do
                {
                    auxint = getName(auxChar,"Ingrese el nombre: ", "ERROR: nombre no valido", 0, 31);
                }while(auxint!=0);
                strcpy(nombre[indice], auxChar);

                do
                {
                    auxint = getName(auxChar,"Ingrese el nombre: ", "ERROR: nombre no valido", 0, 31);
                }while(auxint!=0);

                strcpy(apellido[indice], auxChar);

                break;
            case '2':

                break;
            case '3':
                break;
            case '4':
                printf("Legajo            Nombre          Apellido\n");
                for(i=0;i<MAX_PERSONAS;i++)
                {
                    if(legajo[i]!= -1)
                    printf("%6d%18s%18s\n", legajo[i],nombre[i],apellido[i]);
                }
                break;
        }
    }
    return 0;
}

void initLegajo(int* legajo, int length)
{
    int i;
    if(legajo !=NULL && length>0)
    {
        for(i= 0;i<MAX_PERSONAS; i++)
        {
            *(legajo+i) = -1;
        }
    }
}
int buscarLibre(int* legajo, int length)
{
    int i;
    int returnAux= -1;
    if(legajo !=NULL && length>0)
    {
        for(i=0;i<MAX_PERSONAS; i++)
        {
            if(*(legajo+i) == -1)
            {
                returnAux = i;
                break;
            }
        }
    }
    return returnAux;
}
