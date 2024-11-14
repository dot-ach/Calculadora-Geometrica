#include <stdio.h>
#include <math.h>
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
  // Variables para almacenar las coordenadas de los puntos
  float x1, y1, x2, y2, m, b;

  // Pedir al usuario las coordenadas de los puntos P1 y P2
  printf("Introduce las coordenadas de P1 (x1, y1): ");
  scanf("%f, %f", &x1, &y1);

  printf("Introduce las coordenadas de P2 (x2, y2): ");
  scanf("%f, %f", &x2, &y2);

  // Calcular la pendiente
  if (x2 - x1 != 0) 
  {
    m = (y2 - y1) / (x2 - x1);

    // Calcular el intercepto b usando la fórmula b = y1 - m * x1
    b = y1 - m * x1;

    // Mostrar la ecuación de la recta y la pendiente
    printf("La ecuacion de la recta es: y = %.2fx + %.2f\n", m, b);
    printf("La pendiente m de la recta es: %.2f\n", m);
  } 
  else 
  {
    printf("La pendiente es indefinida (recta vertical).\n");
    printf("La ecuacion de la recta es: x = %.2f\n", x1);
  }
}

void DistanciaEntreDosPuntos()
{
  // Variables para almacenar las coordenadas de los puntos
  float x1, y1, x2, y2, distancia;

  // Pedir al usuario las coordenadas de los puntos P1 y P2
  printf("Introduce las coordenadas de P1 (x1, y1): ");
  scanf("%f, %f", &x1, &y1);

  printf("Introduce las coordenadas de P2 (x2, y2): ");
  scanf("%f, %f", &x2, &y2);

  // Calcular la distancia entre los puntos
  distancia = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

  // Mostrar el resultado
  printf("La distancia entre los puntos P1 y P2 es: %.2f\n", distancia);
}

void PuntoMedioEntreDosPuntos()
{
  // Variables para almacenar las coordenadas de los puntos
  float x1, y1, x2, y2, x3, y3;

  // Pedir al usuario las coordenadas de los puntos P1 y P2
  printf("Introduce las coordenadas de P1 (x1, y1): ");
  scanf("%f, %f", &x1, &y1);

  printf("Introduce las coordenadas de P2 (x2, y2): ");
  scanf("%f, %f", &x2, &y2);

  // Calcular el punto medio
  x3 = (x1 + x2) / 2;
  y3 = (y1 + y2) / 2;

  // Mostrar el punto medio
  printf("El punto medio P3 entre P1 y P2 es: (%.2f, %.2f)\n", x3, y3);
}

void PerimetroAreaTriangulo()
{
  // Variables para almacenar las coordenadas de los puntos y las longitudes de los lados
  float x1, y1, x2, y2, x3, y3;
  float a, b, c, s, perimetro, area;

  // Pedir al usuario las coordenadas de los puntos P1, P2 y P3
  printf("Introduce las coordenadas de P1 (x1, y1): ");
  scanf("%f, %f", &x1, &y1);

  printf("Introduce las coordenadas de P2 (x2, y2): ");
  scanf("%f, %f", &x2, &y2);

  printf("Introduce las coordenadas de P3 (x3, y3): ");
  scanf("%f, %f", &x3, &y3);

  // Calcular las longitudes de los lados
  a = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
  b = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
  c = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

  // Calcular el perímetro
  perimetro = a + b + c;

  // Calcular el semiperímetro
  s = perimetro / 2;

  // Calcular el área usando la fórmula de Herón
  area = sqrt(s * (s - a) * (s - b) * (s - c));

  // Mostrar el perímetro y el área
  printf("El perímetro del triángulo es: %.2f\n", perimetro);
  printf("El área del triángulo es: %.2f\n", area);

}