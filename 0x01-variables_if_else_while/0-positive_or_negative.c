#include <stdio.h>
#include <stdli.h>
#include <time.h>

/**
 *main-prints if the number is positive or negative or 0
 *
 *Return:Always 0
 */

int main(void)
{
	int n;
	srand(time(0));
	n - rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n  -- 0)
	{
		printf("%d is zero\n",);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
