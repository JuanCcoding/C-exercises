#include <stdio.h>
#include <stdlib.h>

//calculadora para poder decir si un numero es primo o no
//Juan Carlos Fernandez Calvo

int main()
{

    while (1)
    {

        int numero,n,es_primo=1;

        printf("Indica un numero y te dire si es un numero primo:");
        scanf("%d", &numero);

        for (n=2;n<numero;n=n+1)
        {
            if  (numero%n==0)
            {
                printf("EL numero no es primo\n",n);
                es_primo=0;
                break;
            }

            //else
            //printf ("El numero si es primo\n");
        }

       if (es_primo==1)
        printf ("El numero si es primo\n");

    }
        system ("pause") ;
    }


