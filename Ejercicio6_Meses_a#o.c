#include <stdio.h>
#include <stdlib.h>

//calculo de mes del año introduciendo su valor numerico [1-12]
//Juan Carlos Fernandez Calvo

int main()
{
    while(1)
    {


    int mes;

        printf("Introduce un valor entre 1-12 y te dire a que mes del año corresponde:");
        scanf ("%i", &mes);

    switch (mes)

    {
              case 1:
                printf("enero\n");
                break;
              case 2:
                printf("febrero\n");
                break;
              case 3:
                printf("marzo\n");
                break;
              case 4:
                printf("abril\n");
                break;
              case 5:
                printf("mayo\n");
                break;
              case 6:
                printf("junio\n");
                break;
              case 7:
                printf("julio\n");
                break;
              case 8:
                printf("agosto\n");
              case 9:
                printf("septiembre\n");
                break;
              case 10:
                printf("octubre\n");
                break;
              case 11:
                printf("noviembre\n");
                break;
              case 12:
                printf("diciembre\n");
                break;

              default:
                printf("ERROR:No existen dichos meses\n");
                break;

            }


}
    system("pause") ;

    return 0;
}






