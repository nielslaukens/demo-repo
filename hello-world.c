#include <stdio.h>

static char *version = "0.0.1";

void usage() {
	printf("Usage: hello-world [who]\n");
}

int main(int argc, char *argv[]) {
	int i = 1;

	if( argc == 1 ) {
		usage();
		return 1;
	}

	while( i < argc ) {
		printf("hello %s\n", argv[i]);
	}

	return 0; // Return OK
}
