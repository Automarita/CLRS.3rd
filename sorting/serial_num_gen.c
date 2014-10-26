#include "include.h"

int main(int argc, char **argv)
{
	if (2 != argc) {
		printf("USAGE: ./serial_num_gen {numbers}\n");
		return -1;
	}
	int length, init;
	int i;
	sscanf(argv[1], "%d", &length);
	init = -100;
	srand(time(NULL));
	for (i = 0; i < length; i++) {
		printf(0 == i ? "%d" : " %d", init + i * 10 + rand() % 10);
	}
	return 0;
}
