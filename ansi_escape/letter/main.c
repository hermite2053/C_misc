#include <stdio.h>

int
main(void)
{
	printf("\\e[0m: \e[0mReset\n");
	printf("\\e[1m: \e[1mBold\e[0m\n");
	printf("\\e[2m: \e[2mFaint\e[0m\n");
	printf("\\e[3m: \e[3mItalic\e[0m\n");
	printf("\\e[4m: \e[4mUnderline\e[0m\n");
	printf("\\e[5m: \e[5mSlow blink\e[0m\n");
	printf("\\e[6m: \e[6mRapid blink\e[0m\n");
	printf("\\e[7m: \e[7mInvert\e[0m\n");
	printf("\\e[8m: \e[8mHide\e[0m\n");

	return 0;
}
