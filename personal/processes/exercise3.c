#include <unistd.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>

void print_process_tree(pid_t root) {
  if (getpid() == root) {
    char buff[50];
    sprintf(buff, "pstree -plA %d", root);
    usleep(50000);
    system(buff);
  }
}

int main() {
  pid_t root = getpid();

  if (fork() && (!fork())) {
    if (!fork() && fork()) {
      if (!fork() && fork()) { 
        if (!fork()) {
          fork();
          if (fork()) {
          
          } else if (!fork()) {
            fork();
          }
        }
      } 
    } else if (!fork()){
    }
  } 

  print_process_tree(root);
  usleep(200000);

  while (wait(NULL) > 0);

  return 0;
}

