#include <stdio.h>

int
main(void)
{
	int fore, back;

	printf("ANSI Colors useage\n");
	printf("\\e[30m -- \\e[37m: foreground color\n");
	printf("\\e[40m -- \\e[47m: background color\n");

	printf("       ");
	for (fore = 30; fore < 38; fore++)
		printf("\e[%dm\\e[%dm\e[0m ", fore, fore);

	printf("\n");

	for (back = 40; back < 48; back++) {
		printf("\e[%dm\\e[%dm\e[0m ", back, back);
		for (fore = 30; fore < 38; fore++)
			printf("\e[%dm\e[%dm\\e[%dm\e[0m ", back, fore, fore);

		printf("\n");
	}

	return 0;
}
