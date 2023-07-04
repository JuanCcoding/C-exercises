#include <stdio.h>
#define euro 166.386
int main() {
float n,x; int opcion;
printf("la cantidad: "); scanf("%f",&n);
printf(”1-Ptas a Euros 2-Euros a ptas"); scanf("%d",&opcion);
switch(opcion)
{
case 1: x=n/euro;
printf("%f Pesetas son %f Euros\n",n,x); break;
case 2: x=n*euro;
printf("%f Euros son %f Pesetas\n",n,x); break;
default: printf(“opción incorrecta\n");
}
return 0;
}
