#include <stdio.h>
#include <stdlib.h> // Necesaria para la funcion system , srand y rand
#include <time.h> // necesaria para la funcion time
#include <windows.h> // Necesaria para la función Sleep , SOLO WINDOWS
#include <process.h> // Necesaria para la funcion  getpid()

int main ()
{
    srand (time(NULL));
    do

    {

        int valor_dado =  rand () % 6+1;
        printf ("Resultado del lanzamiento del dado: %d\n", valor_dado);
        if (valor_dado==6)
        {
          printf("He sacado un seis, el programa va a finalizar\n") ;
          break;
        }


        Sleep (2000); //Función para repetir la variable que se ejecuta arriba, 2000 son  2seg, al ser milisegundos va de 1000 en 1000.

    } while (1);
    return 0;

 system("pause");

}


