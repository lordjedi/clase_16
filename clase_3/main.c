#include <stdio.h>
#include <stdlib.h>
#define NUMERO_PI 3.1415
float areaCirculo(float radio);
float get_number(char*);
int main()
{
    float radio,area;
    radio = get_number("Ingrese el radio del circulo:  ");
    area = areaCirculo(radio);
    printf("el area del circulo es: %f", area);

    return 0;
}




float get_number(char* text)
{
    float returnAux;
    if(text != NULL)
    {
        printf(text);
        scanf("%f", &returnAux);
    }
    return returnAux;
}

float areaCirculo(float radio)
{
    float area;
    area = NUMERO_PI * (radio * radio);
    return area;
}
