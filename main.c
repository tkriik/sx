#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "notreached.h"
#include "vsn.h"

void
vsn(void)
{
	fprintf(stderr, "sx %d.%d.%d\n", SX_VSN_MAJOR, SX_VSN_MINOR,
	    SX_VSN_PATCH);
	exit(0);
}

void
usage(void)
{
	extern char *__progname;
	fprintf(stderr, "usage: %s [-hV] [file]\n", __progname);
	exit(1);
}

int
main(int argc, char *argv[])
{
	int opt = -1;

	while ((opt = getopt(argc, argv, "hV")) != -1) {
		switch (opt) {
		case 'V':
			vsn();
			NOTREACHED();
			break;
		case 'h':
		default:
			usage();
			NOTREACHED();
			break;
		}
	}

	printf("hello\n");

	return 0;
}
