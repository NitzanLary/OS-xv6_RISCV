#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char **argv)
{
    // int pid;
    // if((pid = fork()) < 0)
    //     exit(1);
    // if(pid == 0){
    //     for (int i = 0; i < 30; i++)
    //     {
    //         fprintf(0, "**child: %d\n", i);
    //     }
    //     fprintf(0, "child pausing:\n");
    //     pause_system(10);
    //     for (int i = 30; i < 60; i++)
    //     {
    //         fprintf(0, "**child: %d\n", i);
    //     }
    // }
    
    // else
    // {
    //     for (int i = 70; i < 100; i++)
    //     {
    //         fprintf(0, "~~parent: %d\n", i);
    //     }
    //     fprintf(0, "parent pausing:\n");
    //     pause_system(10);
    //     wait(0);
    // }
    // int cpid;
    // int status;
    for(int i = 0; i < 7; i++){
        // if((cpid=fork()) != 0){
        //     wait(&status);
        // }
        fork();
    }
    for (int i = 0 ; i < 50 ; i++){
        printf("yanay gay\n");
    }
    sleep(20);
    // yield();
    // sleep(50);
    // printf("\nIm back!\n");
    // print_stats();
    // int x = 10;
    // int* y = &x;
    // *y = *y + 5;
    // printf("y is: %d", *y);
    exit(0);
        
}
