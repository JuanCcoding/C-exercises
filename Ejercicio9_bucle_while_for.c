#include <stdio.h>
#include <stdlib.h>

//Idem. del ejercicio 9 pero en este empleamos el bucle for while
// Juan Carlos Fernandez Calvo

int main()
{
    int i=1, numero=1, suma=0;

                        //for (i=1; i<=200; i++) esto lo usaria si fuera con el lazo for
                        //i=1;
    while (i<=200)
    {
        suma=suma+numero;
        numero=numero+2;
        i++; // es igual a i=i+1
    }

    printf("La suma total de los 200 primeros numeros impares es: %d\n", suma);

    system("pause");
    return 0;
}
