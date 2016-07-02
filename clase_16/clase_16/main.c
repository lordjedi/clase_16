#include <stdio.h>
#include <stdlib.h>
#include "input.h"
#include "lib.h"
int main()
{
    S_Person persona;
    int auxInt;

    auxInt = loadPerson(&persona);
    if(auxInt== 0)
    {
        printf("persona cargada!");
    }

    printPerson(&persona);

    return 0;
}
