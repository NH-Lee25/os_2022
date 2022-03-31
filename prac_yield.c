#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
    int pid = 1;

    for(int i=0; i<10; i++){
            
        pid = fork();

        if (pid < 0) { 
            printf(1, "fork failed\n");
        } 
        
        else if (pid == 0) {
            printf(1, "child!\n");
            exit();
        }
        
        else {
            printf(1, "parent\n");
            wait();
        }
        
        sleep(5);
        my_yield();
    }

    return 0;
}
