/* Patrón Numérico
*
* Descripción:
* Dado un número entero n, imprime un patrón en forma de diamante.
*
* Formato de salida:
* Las filas deben estar centradas con espacios en blanco a la izquierda para formar el diamante.
*
* Ejemplo 1:
* Para n = 3, la salida debería ser:
*       *
*     * * *
*   * * * * *
*     * * *
*       *
* */

#include <stdio.h>

void print_diamond(int n) {
  /* Definimos un bucle anidado para recorrer la mitad 
   * del diamante, el tamaño de nuestra diagonal siempre 
   * será el doble de n - 1, por eso solo recorremos hasta 
   * n en las filas (ya que empezamos con i = 1) y solo 
   * queremos llegar hasta la mitad. Y hasta 2 * i - 1 
   * (el total de la diagonal), en las columnas puesto que 
   * completaremos el patrón hasta el centro.
   * */
   for (int i = 1; i <= n; i++) {
      /* Antes de imprimir los asteriscos en pantalla debemos conocer los saltos
       * de linea presentes en el patrón, podemos sustancialmente definir un patrón 
       * no estricto para esto, 2 * (n - i) + 2, que en medida que avanzamos el indice
       * decrece su tamaño, nos sirve en este caso porque recordamos que solo estamos trabajando
       * hasta la mitad del diamante.
       * */ 
       for (int j = 1; j <= 2 * (n - i) + 2; j++) {
            printf(" ");
        }
      /* Para el doble de cada indice le restaremos uno siguiendo el patron
       * del ejercicio imprimiendo esa cantidad de asteriscos
       * */
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
            // Si hay mas de 1 irá separandolos gradualmente con un espacio en blanco
            if(j < 2 * i - 1)
                printf(" ");
        }
      // Hacemos un salto de linea para separar cada fila
        printf("\n");
    }
    
    /* Empezamos desde n-1, porque solo necesitamos imprimir la mitad inferior
     * del diamante, sin la linea central, y a partir de ahora haremos un decremento
     * con el mismo patrón
     * */
    for (int i = n - 1; i >= 1; i--) {
        // Igual que la parte superior
        for (int j = 1; j <= 2 * (n - i) + 2; j++) {
            printf(" ");
        }
        // Igual que la parte superior
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
            if(j < 2 * i - 1)
                printf(" ");
        }
        printf("\n");
    }
}

int main() {
  int n;
  printf("Reading n format pattern: ");
  scanf("%d", &n);
  print_diamond(n);
  return 0;
}
