#include <stdio.h>

int main()
{

    int valor=1;

    printf ("indica un numero\n");
    scanf ("%i", &valor);

    switch(valor)
    {
    case 1:
        printf ("Numero 1\n");
        break;

    case 2:
        printf ("Numero 2\n");
        break;
    
    default:
        printf ("Otro\n");
        break;
    }

    return 0;
}