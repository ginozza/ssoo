#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>

void print_process_tree(pid_t root) {
  if (getpid() == root) {
    sleep(1);
    char buff[50];
    sprintf(buff, "pstree -plA %d", root);
    usleep(50000);
    system(buff);
  }
}

int main() 
{
  pid_t root = getpid(); 
  int i, j;
  pid_t pid;

  for(i = 1; i <= 6; i++) {
    pid = fork();
    if(!pid) {
      if(i == 4) {
        pid = fork();
        if(!pid) {
          for(j = 1; j <= 3; j++) {
            pid = fork();
            if(!pid) {
              if(j == 3) {
                pid = fork();
              }
              break;
            }
          }
          break;
        }
      }
      break;
    }
  }
  sleep(3); 

  print_process_tree(root);

  sleep(3);
  return 0;
}
