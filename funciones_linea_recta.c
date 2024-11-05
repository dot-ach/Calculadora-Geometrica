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
  int x1, y1, x2, y2, m, b; 
  printf("2.Ecuación de la recta que pasa por dos puntos: \n");
    
   
  printf("Ingrese el punto x1:\n");
  scanf("%d", &x1);
  printf("Ingrese el punto y1:\n");
  scanf("%d", &y1);
  printf("Ingrese el punto x2:\n");
  scanf("%d", &x2);
  printf("Ingrese el punto y2:\n");
  scanf("%d", &y2);


  // m = EcuasionPendiente(x1, y1, x2, y2);
  // b = OrdenadaAlOrigen(m, y1, x1); 

  printf("Pendiente: %d", m);
  printf("Interseccón: %d", b);
}

void DistanciaEntreDosPuntos()
{
  printf("\n Distancia entre dos puntos");
}

void PuntoMedioEntreDosPuntos()
{
  printf("\n Punto medio entre dos puntos");
}

void PerimetroAreaTriangulo()
{
  printf("\n Perímetro y área de un triangulo en la recta");
}