#include <stdio.h>

int suma();
int num3=33; // Variable global

int main()
{
    printf ("%i\n", suma(2,2));
    return 0;
}

int suma(int num1, int num2)
{
    int suma=num1+num2+num3;

    return (suma);
}
