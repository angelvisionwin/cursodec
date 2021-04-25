#include <stdio.h>
#define PI 3.14159
#define CUBO(a) a*a*a

int main()
{
    int suma;
    int a =3;
    suma = PI + 3;

    printf ("PI %i\n",suma);

    printf ("cubo %i\n",CUBO(a));
    
    return 0;
}