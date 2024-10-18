#include <stdio.h>

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

    y = EcuasionPendiente(m, x, b);

    printf("El resultado es: %d", y);
    // printf("\n%d", a);
    break;
  case 2:
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

    m = (y2 - y1) / (x2 - y2);
    b = y1 - (m * x1); 

    break;  

  default:
    break;
  }
}