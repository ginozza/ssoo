/* 
 * Desarrole un algoritmo que genere la siguiente jerarquía de procesos:
 * Proceso Padre
 * ├── Hijo 1
 * ├── Hijo 2
 * ├── Hijo 3
 * │   ├── Hijo 3.1
 * │   │   └── Hijo 3.1.1
 * │   ├── Hijo 3.2
 * │   ├── Hijo 3.3
 * │   ├── Hijo 3.4
 * │   └── Hijo 3.5
 * │       └── Hijo 3.5.1
 * ├── Hijo 4
 * └── Hijo 5
 * */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void) {
  pid_t pid;
  int i, j;

  // Proceso padre: 5 hijos
  for(i = 1; i <= 5; i++) {
    pid = fork();
    if(pid < 0) {
      perror("Fallo en fork (Padre)");
      exit(EXIT_FAILURE);
    }
    // Proceso hijo
    if(pid == 0) {
      printf("Hijo %d; Proceso padre. PID: %d\n", i, getpid());

      // Si es el 3er hijo, crea 5 sub-hijos
      if(i == 3) {
        for(j = 1; j <= 5; j++) {
          pid = fork();
          if(pid < 0) {
            perror("Fallo en fork (Hijo 3)");
            exit(EXIT_FAILURE);
          }
          // Proceso hijo
          if(pid == 0) {
            printf("Hijo 3.%d. PID: %d\n", j, getpid());

            // Si es el 1er o 5to hijo, crea 1 sub-hijo respectivamente
            if(j == 1 || j == 5) {
              pid = fork();
              if(pid < 0) {
                perror("Fallo en fork (Hijo 3.1 o 3.5)");
                exit(EXIT_FAILURE);
              }
              if(pid == 0) {
                printf("Sub-hijo de Hijo 3.%d. PID: %d\n", j, getpid());
                exit(EXIT_SUCCESS); // Termina el proceso sub-hijo Hijo 3.j
              }
            }
            exit(EXIT_SUCCESS); // Termina el proceso Hijo 3.j
          }
        }
        // Hijo 3 espera a que sus 5 hijos terminen
        for(j = 1; j <= 5; j++) {
          wait(NULL);
        }
      }
      // Termina el proceso Hijo i
      exit(EXIT_SUCCESS);
    }
  }
  // Proceso padre espera a que terminen sus 5 hijos
  for(i = 1; i <= 5; i++) {
    wait(NULL);
  }

  return 0;
}
