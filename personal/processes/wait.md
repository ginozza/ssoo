# wait()

A **process** may wait for another process to complete its execution. In most systems, **parent process** can create an independently executing **child process**. <u>The parent process may then issue a wait system call, which suspends the execution of the parent process while the child executes</u>. When the child process terminates, it returns an exit status to the operating system, which is the returned to the waiting parent process, The paren process then resumes execution.

An operating system may provide variations of the *wait* call that allow a process to wait for any of its child processes to exit, or to wait for a single specific child process (identified by its process ID) to exit.

<u>Some operating systems issue a **signal** (SIGCHLD) to the parent process when a child process terminates, notifying the parent process and allowing it to retrieve the child process's exit status</u>.

The **exit status** returned by a child process typically indicates whether the process terminated normally or *abnormally*. For normal termination, this status also includes the exit code (usually an integer value) that the process return to the system. Waitid has been a mandatory part of the POSIX standard since 2001.

#### Synopsis
```c
#include <sys/types.h>
#include <sys/wait.h>

pid_t wait(int *status);

pid_t waitpid(pid_t pid, int *status, int options);

int waitid(idtype_t idtype, id_t id, siginfo_t *infop, int options);
```

All of these system calls are used to wait for state changes in a child of the calling process, and obtain information abput the child whose state has changed. <u>A state change is considered to be: the child terminated; the child was stopped by a signal; or the child was resumed by a signal</u>.

If a chid has already changed  state, then these calls return inmediately. Otherwise they block until either a child changes state or a signal handler interrupts the call (assuming that system calls are not automatically restarted using the SA_RESTART flag of sigaction(2)). In the remainder of this page, a child whose state has changed and which has not yet been waited upon by one of these system calls is termed waitable. 

## Zombies and orphans

