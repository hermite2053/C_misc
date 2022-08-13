/*
	display the version of C
*/
#include <stdio.h>

int
main(void)
{
#if defined(__STDC__)
	if (__STDC__ == 1)
		printf("Conforming implementation.\n");
	else
		printf("__STDC__ is defined but"
		       "is NOT conforming implementation\n");
#if defined(__STDC_VERSION__)
	if (__STDC_VERSION__ == 199409L)
		printf("Version=C95\n");
	else if (__STDC_VERSION__ == 199901L)
		printf("Version=C99\n");
	else if (__STDC_VERSION__ == 201112L)
		printf("Version=C11\n");
	else if (__STDC_VERSION__ == 201710L)
		printf("Version=C17\n");
	else
		printf("__STDC_VERSION__ is defined but"
		       "the version is unknown.\n");
#else
	printf("__STDC_VERSION__ is undefined.\n");
#endif
#else
	printf("__STDC__ is not defined:NOT conforming implementation.\n");
#endif
}
