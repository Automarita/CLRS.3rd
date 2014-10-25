#include "include.h"

int main(int argc, char** argv) {
	if(2 != argc) {
		printf("USAGE: ./rand_num_gen {numbers}\n");
		return -1;
	}
	int length;
	sscanf(argv[1], "%d", &length);
	srand(time(NULL));
	
	int i;
	for(i=0; i<length; i++) {
		printf(0==i ? "%d" : " %d", rand());
	}
	return 0;
}

