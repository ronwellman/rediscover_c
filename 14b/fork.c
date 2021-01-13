#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
	pid_t pid;
	int mynum = 5;

	pid = fork();

	if (0 == pid) {
		printf("I'm a wild child and mynum is: %d\n", mynum);
		getchar();
		/*mynum = 10;*/
		printf("Stopping child. mynum is %d\n", mynum);
	} else {
		printf("Parent speaking.  Child pid is %d and mynum is %d\n", pid, mynum);
		getchar();
		mynum = 20;
		printf("Stopping parent. mynum is %d\n", mynum);
	}
	return 0;
}

