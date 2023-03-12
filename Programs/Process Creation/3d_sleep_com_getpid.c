#include <stdio.h>
#include <unistd.h>

int main(){
    int ppid;
    int pid = fork();
    if (pid < 0){
        printf("Process not created\n");
        return -1;
    }
    if (pid > 0){
        printf("Parent process\n");
        sleep(10);
        pid = getpid();
        printf("Parent process id is %d\n", pid);
    }
    else{
        printf("Child process\n");
        pid = getpid();
        ppid = getppid();
        printf("child process id %d and parent process id is %d\n", pid, ppid);
        sleep(5);
        printf("Child process after 5s sleep \n");
        printf("child process id %d and parent process id is %d\n", pid, ppid);
    }
}