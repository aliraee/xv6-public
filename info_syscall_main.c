#include "types.h"
#include "stat.h"
#include "user.h"
struct proc_info {
    int pid;
    int memsize;
 };
int main(void)
{
	int rc =  fork();
	if( rc == 0){
		//child
		int* childptr = (int *)malloc(1000);
		printf(1,"childpointer: %s\n", childptr );
	}
	else{
		//parent
		int* parentptr = (int *)malloc(2000);
		printf(1,"parentpointer : %s\n", parentptr);
	}
	info();
	wait();
	exit();
}
