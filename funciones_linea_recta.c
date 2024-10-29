#include <stdio.h>
#include "funciones_linea_recta.h"

void EcuacionPendiente()
{
  float m;
  int x,y;
  int elemento_independiente;
  printf("\n Digite la pendiente en decimales: ");
  scanf("%f", &m);

  printf("Digite el valor de un punto en el formato(x,y): ");
  scanf("%i,%i", &x,&y);

  elemento_independiente = y - (m * x);
  printf("La ecuación de la recta es: y = %.2fx (+) %i \n ", m, elemento_independiente);

}


void RectaPorDosPuntos()
{
  
}