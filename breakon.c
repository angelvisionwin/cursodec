#include <stdio.h>

int main()
{

    int contador=1;

    while (contador<=10)
    {
        /* code */

        if (contador==4){
            continue;
        }

        if (contador==5){
            break;
        }
        printf ("%i\n",contador);
        contador++;
    }
    

    return 0;
}
