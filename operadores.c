/**
 * @brief Multiplica 2 matrices 3x3 y devuelve el resultado
 * @param A La primera matriz a multiplicar de tamaño 3x3
 * @param B La segunda matriz a multiplicar de tamaño 3x3
 * @return Una nueva matriz C = AxB.
 */

#include <stdio.h>
int main()
{
    int edad;  ///&lt; Descripción resumida de a
    printf ("dime tu edad\n");
    scanf("%d",&edad);   /*!&lt; Descripción extendida de c*/
    if( edad >= 18)
    {
        printf ("eres mayor de edad\n");
    }
    else if (edad==17)
    {
        printf ("casi!!\n");
    }
    else{
        printf ("eres menor de edad\n");
    }
    return 0;
}