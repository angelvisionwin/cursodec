#include <stdio.h>
int main()
{
    char C = 'y';            // tamaño de 1 byte 0...255
    int a = 20;              // tamaño de 2 bytes -32768 ... 32767
    short e = -1;            // tamaño de 2 bytes -128 ... 127
    unsigned int u = 25;     // tamaño de 2 bytes 0 .. 65535
    long l = 5932;           // tamaño de 4 bytes -2147483648 ... 2147483647
    float f = 72.534;        // tamaño de 4 bytes ... enorme
    double d = 12323.877658; // tamañpo de 8 bytes ... enorme

    printf ("%c\n",C);
    printf ("%i\n",a);
    printf ("%i\n",e);
    printf ("%i\n",u);
    printf ("%li\n",l);
    printf ("%f\n",f);
    printf ("%.3f\n",f);
    printf ("%lf\n",d);
    printf ("%.2lf\n",d);


    char *nombre; // Esto no tiene hecha la reserva en la memoria
    char nombre2[] ="Fulano de tal"; // Este si

    nombre = &nombre2[0];
    // o simplemente

    nombre = nombre2; // sin usar el &

    printf ("%s",nombre);

    return 0;
}
