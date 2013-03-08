#include <stdio.h>

static char *version = "0.0.1";

int main(int argc, char *argv[]) {
	char *hello_who = "world";

	if( argc == 2 ) {
		hello_who = argv[1];
	}
	printf("hello %s\n", hello_who);

	return 0; // Return OK
}
