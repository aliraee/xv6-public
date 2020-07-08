#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char const *argv[])
{
    if (argc < 2){
        printf(1, "Usage: set_priority {priority val}\n");
        exit();
    }
    int val, old_priority;
    val = atoi(argv[1]);
    old_priority = set_priority(val);
    if (old_priority == -1){
        printf(1, "change priority unsuccessful.\n");
    }
    else
    {
        printf(1, "Change priority successful. old priority is: %d\n", old_priority);
    }
    exit();
}
