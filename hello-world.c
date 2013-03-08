#include <stdio.h>

int main(int argc, char *argv[]) {
	int i = 1;
	while( i < argc ) {
		printf("hello %s\n", argv[i]);
	}
	if( argc == 1 ) {
		printf("hello world\n");
	}

	return 0; // Return OK
}
