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

  fork();
  if(!fork()) {
    fork();
    printf("hello world");
  }

  sleep(3); 

  print_process_tree(root);

  sleep(3);
  return 0;
}


