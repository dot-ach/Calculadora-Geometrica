#include <stdio.h>
#include "funciones_linea_recta.h"

void RectaPorDosPuntos()
{
  int x1, y1, x2, y2, m, b; 
    printf("2.Ecuación de la recta que pasa por dos puntos: ");
    
    printf("Ingrese el punto x1:\n");
    scanf("%d", &x1);
    printf("Ingrese el punto y1:\n");
    scanf("%d", &y1);
    printf("Ingrese el punto x2:\n");
    scanf("%d", &x2);
    printf("Ingrese el punto y2:\n");
    scanf("%d", &y2);


    m = EcuasionPendiente(x1, y1, x2, y2);
    b = OrdenadaAlOrigen(m, y1, x1); 

    printf("Pendiente: %d", m);
    printf("Interseccón: %d", b);
    
}
