#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char const *argv[])
{
    int pid = fork();
    if (pid < 0){
        printf(1, "error in forking process.\n");
        exit();
    }
    else if(pid == 0){
        // child
        int x = 0;
        printf(1, "child(%d): was created.\n", getpid());
        while(1){
            x += 1;
        }
    }
    else
    {
        // parent
        printf(1, "parent(%d): created child %d.\n", getpid(), pid);
        // wait();
    }
    exit();    
}
