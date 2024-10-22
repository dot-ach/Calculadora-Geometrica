#include<stdio.h>
#include "funciones_circunferencia.h"

void MenuCircunferencia()
{
  int opcion_cir;
  do{
  printf("-------La Circunferencia-------\n");
  printf("1.Ecuacion de la circunferencia con centro en el origen y radio r\n");
  printf("2.Ecuacion de la circunfernecia con centro C y radio r\n");
  printf("3.Ecuacion de la circunferencia con centro C y un punto P\n");
  printf("4.Ecuacion de la circunferencia con P1 y P2 como extremos del diametro\n");
  printf("5.Menu Principal\n");

  scanf("%d",&opcion_cir);

  switch(opcion_cir) 
  {
    case 1:
      printf("opcion 1\n");
    break;
    case 2:
      printf("opcion 2\n");
    break;
    case 3:
      printf("opcion 3\n");
    break;
    case 4:
      printf("opcion 4\n");
    break;
  }
  }while (opcion_cir != 5);
  
  
}
