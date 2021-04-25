#include <stdio.h>
#define length 2

struct propietario
{
    char nombre[20];
    char direccion[30];
};

struct perro
{
    char nombre[30];
    int edadMeses;
    struct propietario propietarioPerro;
}perros[length];

int main()
{
    for (int i = 0; i < length; i++)
    {
        printf ("Nombre del perro\n");
        scanf("%s",&perros[i].nombre);
        printf ("Nombre del propietario\n");
        scanf("%s",&perros[i].propietarioPerro.nombre);
    }

    for (int i = 0; i < length; i++)
    {
        printf ("%i Nombre del perro %s\n",i+1,perros[i].nombre);
        printf ("%i Nombre del propietario %s\n",i+1,perros[i].propietarioPerro.nombre);
    }



    return 0;
}
