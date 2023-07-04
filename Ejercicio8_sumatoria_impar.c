#include <stdio.h>
#include <stdlib.h>

//Sumar los numeros impares que existen del 1 - 200
//Juan Carlos Fernandez Calvo
int main()
{
    int i, numero, suma;
    numero=1;
    suma=0;
    for (i=1; i<=200; i++)
    {
        //suma=suma+numero; //tambien valdria pero
        //numero=numero+2;   // es mejor realizar la operación en una sola variable

        suma+=2*i-1;
    }

    printf("La suma total de los 200 primeros numeros impares es: %d\n", suma);

    system("pause");
    return 0;
}
