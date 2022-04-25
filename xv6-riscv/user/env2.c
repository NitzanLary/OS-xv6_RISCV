#include "kernel/types.h"
#include "kernel/stat.h"
#include "kernel/fcntl.h"
#include "user/user.h"

void env(int size, int interval, char* env_name) {
    int result = 1;
    int loop_size = (int)10e6;
    int n_forks = 2;
    int pid;
    // int fd = open("results.txt", O_WRONLY | O_CREATE);
    for (int i = 0; i < n_forks; i++) {
        pid = fork();
    }
    for (int i = 0; i < loop_size; i++) {
        if (i % (int)(loop_size / 10e0) == 0) {
        	if (pid == 0) {
        		printf("%s %d/%d completed.\n", env_name, i, loop_size);
        	} else {
        		printf(" ");
        	}
        }
        if (i % interval == 0) {
            result = result * size;
        }
    }
    // if(pid == 0){
    //     wait(0);
    //     print_stats();
    // }
    printf("\n");
}

void env_large() {
    env(10e6, 10e6, "env_large");
}

void env_freq() {
    env(10e1, 10e1, "env_freq");
}

int main(int argc, char **argv){
    if(argc == 1){
        env_large();
    }
    else{
        env_freq();
    }
    print_stats();
    exit(0);
}