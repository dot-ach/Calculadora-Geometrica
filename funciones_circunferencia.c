#include <stdio.h>
#include <math.h>
#include "funciones_circunferencia.h"

void CentroOrigen_RadioR()
{
  // Variable para almacenar el radio
  float r;

  // Pedir al usuario el valor del radio
  printf("Introduce el valor del radio r: ");
  scanf("%f", &r);

  // Mostrar la ecuación de la circunferencia
  printf("La ecuacion de la circunferencia es: x^2 + y^2 = %.2f\n", r * r);
}

void CentroC_RadioR()
{
  // Variables para almacenar el centro y el radio
  float x0, y0, r;

  // Pedir al usuario el centro de la circunferencia y el radio
  printf("Introduce las coordenadas del centro C (x0, y0): ");
  scanf("%f, %f", &x0, &y0);

  printf("Introduce el valor del radio r: ");
  scanf("%f", &r);

  // Mostrar la ecuación de la circunferencia
  printf("La ecuacion de la circunferencia es: (x - %.2f)^2 + (y - %.2f)^2 = %.2f\n", x0, y0, r * r);

}

void CentroC_PuntoP()
{
  // Variables para almacenar el centro, el punto y el radio
  float x0, y0, x, y, r;

  // Pedir al usuario las coordenadas del centro C y el punto P
  printf("Introduce las coordenadas del centro C (x0, y0): ");
  scanf("%f, %f", &x0, &y0);

  printf("Introduce las coordenadas del punto P (x, y): ");
  scanf("%f, %f", &x, &y);

  // Calcular el radio como la distancia entre C y P
  r = sqrt((x - x0) * (x - x0) + (y - y0) * (y - y0));

  // Mostrar el valor del radio y la ecuación de la circunferencia
  printf("El radio de la circunferencia es: %.2f\n", r);
  printf("La ecuacion de la circunferencia es: (x - %.2f)^2 + (y - %.2f)^2 = %.2f\n", x0, y0, r * r);

}

void P1_P2_Extremos_Diametro()
{
  // Variables para almacenar los puntos, el centro y el radio
  float x1, y1, x2, y2, x0, y0, r;

  // Pedir al usuario las coordenadas de los puntos P1 y P2
  printf("Introduce las coordenadas de P1 (x1, y1): ");
  scanf("%f, %f", &x1, &y1);

  printf("Introduce las coordenadas de P2 (x2, y2): ");
  scanf("%f, %f", &x2, &y2);

  // Calcular el centro de la circunferencia
  x0 = (x1 + x2) / 2;
  y0 = (y1 + y2) / 2;

  // Calcular el radio
  r = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)) / 2;

  // Mostrar el centro, el radio y la ecuación de la circunferencia
  printf("El centro de la circunferencia es: C(%.2f, %.2f)\n", x0, y0);
  printf("El radio de la circunferencia es: %.2f\n", r);
  printf("La ecuacion de la circunferencia es: (x - %.2f)^2 + (y - %.2f)^2 = %.2f\n", x0, y0, r * r);
}