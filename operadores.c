#include <stdio.h>
int main()
{
    int edad;  
    printf ("dime tu edad\n");
    scanf("%d",&edad);  
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
