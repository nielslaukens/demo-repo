#include <stdio.h>
#include <sysexits.h>

static char *version = "1.0";

void usage() {
	printf("Usage: hello-world [who]\n");
	printf("Version: %s\n", version);
}

int main(int argc, char *argv[]) {
	if( argc == 1 ) {
		usage();
		return EX_USAGE;
	}

	for(int i; i++; i<argc) {
		printf("Hello %s\n", argv[i]);
	}

	return EX_OK;
}
