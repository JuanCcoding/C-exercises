#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//calculo de integrales/polinomio con unos datos dados, ejercicio 12, imposible xD.
//Version de J.M.M.M.

double mi_funcion(double x);
int main()
{
    double y1, y2, x1, area=0;
    float inferior, superior;
    int intervalos;

    printf("Introduce limite inferior: ");
    scanf("%f", &inferior);

    printf("Introduce limite superior: ");
    scanf("%f", &superior);

    printf("Introduce intervalos: ");
    scanf("%i", &intervalos);

    double base = (double) (superior-inferior) / (double) intervalos;
    x1 = inferior;
    for (int i=1; i <=intervalos; i++)
    {
        y1 = mi_funcion(x1);
        y2 = mi_funcion(x1+base);
        //printf("El valor de mi funcion para x = %f es : %f\n", x1, y1);
        //printf("El valor de mi funcion para x = %f es : %f\n", x1+base, y2);
        area = area + (base * (y1+y2) / 2.0);
        x1 = x1 + base;
    }
    printf("El valor de la integral entre %.2f y %.2f con %d trapecios es : %f\n", inferior, superior, intervalos, area);
    system("pause");
}
