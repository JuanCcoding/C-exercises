#include <stdio.h>
#include <stdlib.h> // Necesaria para la funcion system , srand y rand
#include <time.h> // necesaria para la funcion time
#include <windows.h> // Necesaria para la función Sleep , SOLO WINDOWS
#include <process.h> // Necesaria para la funcion  getpid()

int main ()
{
    long semilla = time (NULL);

    semilla = semilla + getpid(); //Semilla conbinada entre las funciones time y getpid
    srand(semilla) ;

    do
    {
        int apuesta = (rand) ()%2;

        if (apuesta==0)
        {
        printf ("Empate!!!: %d\n", apuesta);
          return(0);
        }

        else (apuesta==1) ;
        {
        printf ("Gana equipo Local %d\n", apuesta);
          return(0);
        }
        /* if (apuesta==2)
        {
        printf ("Gana equipo Visitante %d\n", apuesta);
          return(0);
        }
    */
        Sleep (2000);

    } while (1);
    return 0;

 system("pause");

}
