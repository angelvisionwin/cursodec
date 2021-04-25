#include <stdio.h>
struct perro
{
    char nombre[30];
    int edadMeses;
    float peso;
} perros[3];

int main()
{

    for (int i = 0; i < 3; i++)
    {
        printf ("Nombre del perro\n");
        scanf("%s",&perros[i].nombre);
        printf ("Edad\n");
        scanf("%i",&perros[i].edadMeses);
        printf ("Peso\n");
        scanf("%f",&perros[i].peso);
    }

    for (int i = 0; i < 3; i++)
    {
        printf ("%i Nombre del perro %s\n",i+1,perros[i].nombre);
        printf ("%i Edad %i\n",i+1,perros[i].edadMeses);
        printf ("%i Peso %.2f\n",i+1,perros[i].peso);
    }
    

    return 0;
}