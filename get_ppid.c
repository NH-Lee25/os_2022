#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{   
    int pid;
    pid = getpid();
    printf(1, "pid : %d\n", pid);

    int ppid;
    ppid = get_ppid();
    printf(1, "ppid : %d", ppid);
    exit();

}
