#include <stdio.h>
#include <unistd.h>

#include <sys/types.h>
#include <sys/wait.h>

int main(){
    int pid, ppid;
    pid = fork();
    if(pid < 0){
        printf("Process not created");
        return -1;
    }
    if (pid == 0){
        printf("Child Process \n");
        pid = getpid();
        printf("Child process id is %d\n", pid);
        return 0;
    }
    else{
        wait(NULL);
        printf("Parent Process executing\n");
    }
    return 0;
}