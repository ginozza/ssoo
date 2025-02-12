# Intro: Processes

A **process** is an instance of a program in execution that is being executed by one or many *threads*(We'll see later on). It encompasses the program's code, itrs current activy represented by the program counter, the processor's registers, and the program's variables stored in memory (You can check my [6502 emulator](https://github.com/ginozza/6502cpp) repo to aproach a little about this concept). Processes are fundamental units managed by the operating system, enabling multitasking by allowing multiple programs run concurrently.

In general, a computer system process consists of the following resources:

- An *image* of the executable machine code associated with a program.
- *Memory*; which includes the executable code, process-specific data (e.g I/O), a call stack (to keep track of active subroutines and/or other events) and a heap to hold intermediate computation data generated during run time.
- Operating system descriptors of resources that are allocated to the process, such as file descriptors (Unix terminology) or handles (Windows), and data sources and sinks.
-Security attributes, such as the process owner and the process set of permissions (allowable operations). From: [wikipedia.org/wiki/Process_(computing)](https://en.wikipedia.org/wiki/Process_(computing)#cite_ref-OSC_Chap4_1-1)

In the C programming language, particularly within Unix-like operating systems, the `fork()` system call is pivotal for process creation. When a process invokes `fork()`, the OS creates a new process called the child process, which is a duplicate of the parent process (the origianl process that called `fork()`). Both processes continue execution from the point where `fork()` was called, but with distinct process identifiers (PIDs) and separate memory spaces.

The `fork()` function returns a value that allows each process to determine its identity:
- **Negative value**: indicates that the `fork()` call failed, and no child process was created.
- **Zero**: returned to the child process, signifying it is the child.
- **Positive value**: returned to the parent process, this value is the PID of the child process.

You can think about fork() as forking the execution, sounds right no?
Look at the next tree explainig it:

```
fork ();   // Line 1
fork ();   // Line 2
fork ();   // Line 3

      (L0)        // Parent process
        |
      (L1)        // There will be 1 child process 
    /     \       // created by line 1.
 (L2)    (L2)     // There will be 2 child processes
 /  \    /  \     //  created by line 2
(L3)(L3)(L3)(L3)  // There will be 4 child processes 
                  // created by line 3
```

## Examples

## Example 1:
Here's the simplest example demonstrating the use of `fork()` in C:
```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char* argv[]) {
    /*The fork() function clone the calling process,
    * creating an exact copy. Return -1 for errors, 0 to the
    * new process, and the process ID of the new process to the
    * old process*/

    fork();

    // This will print "Hello world\n" twice
    printf("Hello world\n");
    return 0;

    /* The fork() function actually returns us a integer
    * We can do int id = fork(); and this is totally fine
    * If we print it, for example using printf("Hello world from id: %d\n", id);
    * The program could show something like:
    * Hello world from id: 0
    * Hello world from id: 5333 (Hypothetical value)
    *
    * In this case if the id is 0, this means that we are in the
    * child process, and if is not, we are in the parent process
    **/
}
```


### Example 2:
Here's an simple example:
```c
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();

    if (pid < 0) {
        // Negative value, fork failed
        perror("Fork failed");
        return 1;
    } else if (pid == 0) {
        // Zero, child process
        printf("Hello from the child process! PID: %d\n", getpid());
        // getpid() function returns the process ID of the calling process
    } else {
        // Parent process
        wailt(NULL); // Wait for the child process to finish
        printf("Hello from the parent process! PID: %d\n", getpid());
    }

    return 0;
}
```

### Example 3:
What could we expect if we use the `fork()` function 2 times?

```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv) {
    fork();
    fork();
    /* We will see this output 4 times, why? 
    *
    * The reason why is because when we use a fork twice or more,
    * they will have the same behavior as before, 
    * for each parent we will have another new node, and 
    * for each child we will have another new one
    *
    * So, what we are seeing here, in mathematical terms,
    * is that we will always have 2^n process (n = process) 
    **/
    printf("Hello world\n");
    return 0;
}
```

### Example 3:
How can we get 3 process doing 2 forks? (Normal expected process when calling the function 2 times is 4)

```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv) {
    int id = fork();
    // If we are not in the parent process, then proceed to fork()
    if (id != 0) {
        fork();
    }

    // Output: Hello world (3 times)
    printf("Hello world\n");
    return 0;
}
```