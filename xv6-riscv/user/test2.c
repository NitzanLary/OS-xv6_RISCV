#include "kernel/param.h"
#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#include "kernel/fs.h"
#include "kernel/fcntl.h"
#include "kernel/syscall.h"
#include "kernel/memlayout.h"
#include "kernel/riscv.h"

void
copy(char* dest, const char* source, int source_off, int len)
{
    char* s = dest + source_off;
    while(len-- > 0){
        *(s++) = *(source++);
    }
}

char*
concat(char* dest, const char* a, const char* b){
    int a_len = strlen(a);
    int b_len = strlen(b);
    int total_len = a_len + b_len + 1;
    char c[total_len];
    copy(c, a, 0, a_len);
    copy(c, b, a_len, b_len);
    char* res = c;
    return res;
}

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
    //     kill_system(1);
    //     for (int i = 0; i < 30; i++)
    //     {
    //         fprintf(0, "**child: %d\n", i);
    //     }
    // }
    
    // else
    // {
    //     for (int i = 0; i < 20; i++)
    //     {
    //         fprintf(0, "~~parent: %d\n", i);
    //     }
    //     // fprintf(0, "parent pausing:\n");
    //     // pause_system(10);
    //     wait(0);
    // }
    // int fd = open("results.txt", O_CREATE | O_WRONLY);

    // char* a = "hello ";
    // char* b = "World\n";
    // // int a_len = strlen(a);
    // // int b_len = strlen(b);
    // // int total_len = a_len + b_len + 1;
    // // char c[total_len];
    // // copy(c, a, 0, a_len);
    // // copy(c, b, a_len, b_len);
    // char d[15];
    // char* od = d;
    // od = concat(d, a, b);
    // printf("%s", od);
    
    exit(0);
        
}
