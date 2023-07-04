#include <stdio.h>
#include <stdlib.h>

//Autor: Juan carlos fernandez calvo
//Parte 1 del ejercicio propuesto en la evaluación continua del dia 14/06/2023.

int main ()

{
 int producto[4] ;
 float total;


printf("                        !!!Bienvenido al restaurante Palmera Playa!!!\n");
 printf("                          Aqui abajo tendras nuestro menu\n");

 printf( "\n Hamburguesa Normal : 6.50e   \n Hamburguesa Premium 8.50e   \n Refresco Pequeno 1.50e   \n Refresco Grande 1.80  \n Cerveza 2.00e\n");


 printf("Coloca ahora donde corresponda las cantidades en numeros de cada producto que deseas consumir y te dire el total a pagar\n\n\n\n\n");
 printf("Gracias y Buen provecho\n\n\n\n");


do    {

        printf("hamburguesa Normal:");
        scanf ("%i",&producto[0]);
      }    while (producto[0]<0);

do    {
        printf("Hamburguesa Premium:");
        scanf ("%i",&producto[1]);
      } while (producto[1]<0);

do    {
        printf("Refresco Pequeno:");
        scanf ("%i",&producto[2]);
      } while (producto[2]<0);

do    {
       printf("refresco Grande:");
       scanf ("%i",&producto[3]);
      } while (producto[3]<0);

do   {
     printf("Cerveza:");
     scanf ("%i",&producto[4]);
     }   while (producto[4]<0);


    total= producto[0]*6.50+producto[1]*8.50+producto[2]*1.50+producto[3]*1.80+producto[4]*2;


     printf("Gracias por consumir en nuestro local, tu total a pagar seria:%.2f euros\n",total);


     //getch ();
     system("pause");
}
