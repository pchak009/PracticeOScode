#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#include <stddef.h>

struct pinfo {
	int ppid;
	int syscall_count;
	int page_usage;
};
int main(int argc, char *argv[]) {
	//int n = 90;
	//if (argc >=2) n = atoi(argv[1]);
	printf("sysinfo:   UCR UNIVERSITY %d\n",sysinfo(0) ); 
	printf("sysinfo: %d\n",sysinfo(1)); 
	printf("sysinfo: %d\n",sysinfo(2)); 
	printf("sysinfo: %d\n",sysinfo(3)); 
	//struct pinfo *in = new pinfo();
	struct pinfo in1;
	//printf("\n\nprocinfo: %d\n",procinfo(in));
	//printf("\n\nprocinfo: %d\n",procinfo(&in1));
	//printf("\n\nprocinfo: %d\n",procinfo(&in1));
	printf("\n\nprocinfo: %d\n",procinfo(NULL));
       //printf("\nprocinfo: ppid: %d syscall_count: %d and apge_usage: %d\n", in1.ppid, in1.syscall_count, in1.page_usage);	
	printf("\n\nprocinfo: %d\n",procinfo(&in1));
       //printf("procinfo: ppid: %d syscall_count: %d and apge_usage: %d\n", in->ppid, in->syscall_count, in->page_usage);	
       printf("\nprocinfo: ppid: %d syscall_count: %d and apge_usage: %d\n", in1.ppid, in1.syscall_count, in1.page_usage);	
	printf("\n\nprocinfo: %d: \n",procinfo(&in1));
       printf("\nprocinfo: ppid: %d syscall_count: %d and apge_usage: %d\n", in1.ppid, in1.syscall_count, in1.page_usage);	
	/*int pid = fork();
	if (pid == 0) {
		printf("This is child");
		printf("sysinfo Inside child: %d: \n",sysinfo(0) ); 
	} else {
		//sleep(5);
		wait(&pid);
		printf("sysinfo: %d: \n",sysinfo(0) ); 
	}*/

	return 0;
}

