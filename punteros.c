#include <stdio.h>

int main()
{
    int a = 2;
    int *apt = &a;

    printf ("%i\n",*apt);
    printf ("%p\n",apt);

    return 0;
}