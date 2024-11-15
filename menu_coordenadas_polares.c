#include <stdio.h>
#include "funciones_coordenadas_polares.h"

void MenuCoordenadasPolares()
{
  int opcion_cp;
  do 
  {
    printf("-------COORDENADAS POLARES-------\n");
    printf("1.Pasar un punto de coordenadas rectangulares a polares\n");
    printf("2.Pasar un punto de coordenadas polares a rectangulares\n");
    printf("3.Regresar al menu principal\n");
    scanf("%d", &opcion_cp);

    switch (opcion_cp)
    {
    case 1:
      RectangularesToPolares();
      break;
    case 2:
      PolaresToRectangulares();
      break;
    default:
      printf("Opción no válida, intenta nuevamente.\n");
      // break;
    }

  }while(opcion_cp != 3);
}