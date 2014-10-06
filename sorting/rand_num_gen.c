#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv) {
	if(2 != argc) {
		printf("User manual: numGen {numbers}\n");
		return -1;
	}
	int length;
	sscanf(argv[1], "%d", &length);
	srand((int)time(0));
	
	int i;
	for(i=0; i<length; i++) {
		printf(0==i ? "%d" : " %d", rand());
	}
	return 0;
}

