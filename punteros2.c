// Variables por referencia a una función

#include <stdio.h>

void cubo(int *n);

int main()
{
    int num=5;

    printf ("Inicial : %i\n",num);
    cubo(&num);
    printf ("Al cubo : %i\n",num);

    return 0;
}

void cubo(int *n)
{
    *n = *n * *n * *n;
    
}