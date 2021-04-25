#include <stdio.h>

struct perro
{
    char nombre[30];
    int edadMeses;
    float peso;
} 
perro1={"Chucho", 10, 3.2},
perro2={"Perro", 24, 2.5};

int main()
{

    printf("Nombre 1 : %s\n",perro1.nombre);
    printf("Peso 2 :%.2f\n",perro2.peso);
    return 0;
}