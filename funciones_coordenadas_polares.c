#include <stdio.h>
#include <math.h>

void RectangularesToPolares()
{
  // Variables para almacenar el punto y las coordenadas polares
  float x, y, r, theta;

  // Pedir al usuario las coordenadas del punto P
  printf("Introduce las coordenadas del punto P (x, y): ");
  scanf("%f, %f", &x, &y);

  // Calcular la distancia r
  r = sqrt(x * x + y * y);

  // Calcular el ángulo theta en radianes
  theta = atan2(y, x);

  // Mostrar las coordenadas polares
  printf("Las coordenadas polares son: r = %.2f, θ = %.2f radianes\n", r, theta);
}

void PolaresToRectangulares()
{
  // Variables para almacenar las coordenadas polares y rectangulares
  float r, theta, x, y;

  // Pedir al usuario las coordenadas polares
  printf("Introduce el valor de r: ");
  scanf("%f", &r);
  
  printf("Introduce el valor del ángulo θ (en radianes): ");
  scanf("%f", &theta);

  // Calcular las coordenadas rectangulares
  x = r * cos(theta);
  y = r * sin(theta);

  // Mostrar las coordenadas rectangulares
  printf("Las coordenadas rectangulares son: P(x, y) = (%.2f, %.2f)\n", x, y);

}