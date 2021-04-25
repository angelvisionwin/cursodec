#include <stdio.h>

int suma();
void saludo();

int main()
{

    saludo();
    printf ("%i\n", suma(2,2));
    return 0;
}

int suma(int num1, int num2)
{
    int suma=num1+num2;

    return (suma);
}

void saludo()
{
    printf ("Hola desde la función\n");
    return;
}

