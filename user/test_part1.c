#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[]) {
	//int n = 90;
	//if (argc >=2) n = atoi(argv[1]);
	printf("sysinfo: %d: \n",sysinfo(0) ); 
	//printf("procinfo: %d: \n",procinfo(73) );
	//scanf("%d", &n);
	return 0;
}

