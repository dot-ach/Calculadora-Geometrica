float RectaPorDosPuntos(int x1, int y1, int x2, int y2, int m, int b)
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


    m = (y2 - y1) / (x2 - y2);
    b = y1 - (m * x1); 

    return ;
}
