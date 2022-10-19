#include "main.h"
/**
 *_islower - checks if characters is lower
 *
 * Return: ret
 */
int _islower(int c)
{
	int ret;

	if (c >= 'a' && c <= 'z')
		ret = 1;
	else
		ret = 0;

return (ret);
}
