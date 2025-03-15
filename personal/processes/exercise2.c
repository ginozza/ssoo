/* 
 * Desarrolle un algoritmo que genere la siguiente jerarquía de procesos:
 * Proceso Padre
 * ├── Hijo 1
 * │   ├── Hijo 1.1
 * │   ├── Hijo 1.2
 * │   ├── Hijo 1.3
 * │   └── Hijo 1.4
 * ├── Hijo 2
 * │   ├── Hijo 2.1
 * │   ├── Hijo 2.2
 * │   └── Hijo 2.3
 * ├── Hijo 3
 * │   ├── Hijo 3.1
 * │   ├── Hijo 3.2
 * │   └── Hijo 3.3
 * ├── Hijo 4
 * │   ├── Hijo 4.1
 * │   └── Hijo 4.2
 * ├── Hijo 5
  */
#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>

int main() {
  pid_t pid;
  int i, j, k;

  for(i = 1; i <= 5; i++) {
    pid = fork();

    if(pid == 0) {
      printf("| Capa 1 - Padre: %d - Hijo: %d\n", 1, i);

      for(j = 0; j < (5 - i); j++) {
        pid = fork();

        if(pid == 0) {
          printf("|- Capa 2 - Padre: %d - Hijo: %d\n", i, j);
          break;
        }
      }

      while(wait(NULL) > 0);
      break;
    }
  }

  while(wait(NULL) > 0);

  return 0;
}
