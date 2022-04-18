#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char **argv)
{
    int seconds;

    if(argc < 2){
    fprintf(2, "usage: pause_system <seconds>\n");
    exit(1);
    }
    seconds = atoi(argv[1]);
    pause_system(seconds);
    exit(0);
}
