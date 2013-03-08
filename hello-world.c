#include <stdio.h>

static char *version = "1.0";

void usage() {
	printf("Usage: hello-world [who]\n");
	printf("Version: %s\n", version);
}

int main(int argc, char *argv[]) {
	if( argc == 1 ) {
		usage();
		return 1;
	}

	for(int i; i++; i<argc) {
		printf("hello %s\n", argv[i]);
	}

	return 0; // Return OK
}
