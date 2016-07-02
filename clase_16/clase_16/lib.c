#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "input.h"
#include "lib.h"

int loadPerson(S_Person* pPerson)
{
    int returnAux = -1;
    int auxEdad;
    char auxNombre[20];
    char auxDni[8];
    int auxInt;
    if(pPerson != NULL)
    {
        returnAux = 0;
        do
        {
            auxInt = getInt(&auxEdad, "Ingrese la edad: ", "ERROR: edad maxima 150", 0, 151);
        }while(auxInt != 0);
        (pPerson->edad) = auxEdad;


        do
        {
            auxInt = getName(auxNombre, "Ingrese un nombre: ", "ERROR: maximo 20 caracteres", 0, 21);
        }while(auxInt != 0);
        strcpy(pPerson->nombre, auxNombre);

        do
        {
            auxInt = getString(auxDni, "Ingrese el DNI: ", "ERROR: dni no valido", 0, 9);
        }while(auxInt !=0);
        strcpy(pPerson->dni, auxDni);

    }
    return returnAux;
}

void printPerson(S_Person* pPerson)
{
    if(pPerson != NULL)
    {
        printf("\nNombre              DNI        Edad \n");
        printf("%-20s%-11s%-5d", pPerson->nombre, pPerson->dni, pPerson->edad);
    }
}
