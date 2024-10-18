#include <stdio.h>
#include "../funcionesParaOperaciones.h"

void MenuLineaRecta(int opcion_lr)
{
  switch (opcion_lr)
  {
  case 1:
    int m, x, b, y;
    printf("Introducir la pendiente de la recta m y el punto P1(x1,y1).\n");
    
    printf("Ingrese la pendiente m como número entero:\n");
    scanf("%d", &m);

    printf("Introducir el punto x como un número entero:\n");
    scanf("%d", &x);

    printf("Introducir el punto b como un número entero:\n");
    scanf("%d", &b);

    y = EcuasionRectaPendiente(m, x, b);

    printf("El resultado es: %d", y);
    // printf("\n%d", a);
    break;
  case 2:
    RectaPorDosPuntos();

    break;  

  default:
    break;
  }
}