#include <stdio.h>

int actual = 0;

/**
 * rand - fake rand function
 *
 * Return:returns either 83, 833, 832, 834, 23 or 74
 */
int rand(int n)
{
	(void)n;

	if (actual == 0)
		return (actual = 83);
	else if (actual == 83)
		return (actual = 833);
	else if (actual == 833)
		return (actual = 832);
	else if (actual == 832)
		return (actual = 834);
	else if (actual == 834)
		return (actual = 23);
	else if (actual == 23)
		return (actual = 74);
}
