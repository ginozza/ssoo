/*
 * Imprime un patrón de números del 1 al n como se muestra
 * a continuación. Cada uno de los números está separado 
 * por un solo espacio.
 *
 * Formato de entrada: La entrada contendrá un solo entero n.
 *
 * Restricciones:
 * No se deben usar matrices.
 * 1 <= n <= 80
 *
 * Entrada de muestra: n = 2
 * 2 2 2
 * 2 1 2
 * 2 2 2
 *
 * Entrada de muestra: n = 5
 * 5 5 5 5 5 5 5 5 5
 * 5 4 4 4 4 4 4 4 5
 * 5 4 3 3 3 3 3 4 5
 * 5 4 3 2 2 2 3 4 5
 * 5 4 3 2 1 2 3 4 5
 * 5 4 3 2 2 2 3 4 5
 * 5 4 3 3 3 3 3 4 5
 * 5 4 4 4 4 4 4 4 5
 * 5 5 5 5 5 5 5 5 5
 * */ 

#include <stdio.h>

void print_square_sequence(int n) {
  /* Hallamos el patrón para el tamaño del cuadrado 
   * Podemos notar que el tamaño siempre será una unidad menor 
   * al doble del cuadrado, por lo tanto: (2*n)-1 */
  int size = (2 * n) - 1; 

  /*Creamos un ciclo anidado que recorrerá las filas y columnas*/
  for (int i = 1; i <= size ;i++) {
    for (int j = 1; j <= size; j++) {
      /* Decimos que i - 1 = min, porque es la distancia
       * desde la fila actual hasta el borde superior*/
      int min = i - 1;
      // Distancia desde la columna actual hasta el borde izquierdo
      if(j - 1 < min)
        min = j - 1;
      // Distancia desde la fila actual hasta el borde interior
      if(size - i < min)
        min = size - i;
      // Distancia desde la columna actual hasta el borde derecho
      if(size - j < min)
        min = size - j;
      // Imprimimos la capa del patrón en la que estamos
      printf("%d ", n - min);
    }
    printf("\n");
  }
}

int main() {
  int n;
  printf("Input the n value: ");
  scanf("%d", &n);
  print_square_sequence(n);
  return 0;
}
