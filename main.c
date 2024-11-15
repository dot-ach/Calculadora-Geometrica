#include <stdio.h>
// #include ""
#include "mostrar_menu_principal.h"
#include "menu_linea_recta.h"
#include "funciones_circunferencia.h"
#include "funciones_coordenadas_polares.h"

int main()
{
  int opcion;

  do
  {
    Mostrar_Menu_Principal();
    printf("Elige una opción: ");       
    scanf("%d", &opcion);
    switch (opcion)
    {
    case 1:
      // printf("La linea recta.\n");
      MenuLineaRecta();

      break;
    case 2:
      // printf("La circunferencia.\n");
      MenuCircunferencia();
      break;
    case 3:
      // printf("Coordenadas polares.\n");
      MenuCoordenadasPolares();
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
