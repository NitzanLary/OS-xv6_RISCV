#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char **argv)
{
    int pid;
    if((pid = fork()) < 0)
        exit(1);
    if(pid == 0){
        for (int i = 0; i < 30; i++)
        {
            fprintf(0, "**child: %d\n", i);
        }
        kill_system(1);
        for (int i = 0; i < 30; i++)
        {
            fprintf(0, "**child: %d\n", i);
        }
    }
    
    else
    {
        for (int i = 0; i < 20; i++)
        {
            fprintf(0, "~~parent: %d\n", i);
        }
        // fprintf(0, "parent pausing:\n");
        // pause_system(10);
        wait(0);
    }
    exit(0);
        
}
