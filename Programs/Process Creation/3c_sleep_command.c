#include <stdio.h>
#include <unistd.h>
#include <stdlib.h> // for exit(0) command

int main(){
    int pid = fork();
    if (pid < 0){
        printf("Process not created");
        return -1;
    } 
    if (pid == 0){
        sleep(2);
        printf("Child process created");
    }
    else{
        printf("Parent Process created");
    }
}