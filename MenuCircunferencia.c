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
      CentroOrigen_RadioR();
    break;
    case 2:
      CentroC_RadioR();
    break;
    case 3:
      CentroC_PuntoP();
    break;
    case 4:
      P1_P2_Extremos_Diametro();
    break;
  }
  }while (opcion_cir != 5);
  
  
}
