#include <stdio.h>
#include "funciones_linea_recta.h"

void MenuLineaRecta()
{
  int opcion_lr;

    do
    {
      printf("\n----- La linea recta -----\n");
      printf("1. Ecuación de la recta dada su pendiente y un punto de la misma\n");
      printf("2. Ecuación de la recta que pasa por dos puntos \n");
      printf("3. Distancia entre dos puntos del plano\n");
      printf("4. Punto medio entre dos puntos del plano\n");
      printf("5. Perímetro y área de un triángulo en el plano\n");
      printf("6. Regresar al menu principal\n");
      scanf("%d", &opcion_lr);

      switch (opcion_lr)
      {
      case 1:
        EcuacionPendiente();
        break;
      case 2:
        RectaPorDosPuntos();
        break;  
      case 3:
        DistanciaEntreDosPuntos();
        break;
      case 4:
        PuntoMedioEntreDosPuntos();
        break;  
      case 5:
        PerimetroAreaTriangulo();
        break;  

      default:
        break;
      }


      // MenuLineaRecta(opcion_lr);
    } while (opcion_lr != 6);

}