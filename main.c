#include <stdio.h>
#include "Funciones/funcionesParaOperaciones.h"

int main()
{
  int opcion;

  do
  {
    printf("\n----- MENU PRINCIPAL -----\n");
    printf("1. La linea recta\n");
    printf("2. La circunferencia\n");
    printf("3. Coordenadas polares\n");
    printf("4. Salir\n");
    printf("Elige una opción: ");       
    scanf("%d", &opcion);
    switch (opcion)
    {
    case 1:
      // printf("La linea recta.\n");
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

        MenuLineaRecta(opcion_lr);
      } while (opcion_lr != 6);

      break;
    case 2:
      printf("La circunferencia.\n");
      break;
    case 3:
      printf("Coordenadas polares.\n");
      break;
    case 4:
      printf("Saliendo del programa...\n");
      break;
    default:
      printf("Opción no válida, intenta nuevamente.\n");
    }

  } while (opcion != 4); 

  return 0;
}
