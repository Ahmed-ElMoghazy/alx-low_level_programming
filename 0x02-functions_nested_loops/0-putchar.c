#include "main.h"
#include <unistd.h>

/**
*main - function prints text as output
*Return:return 0
*/
int main(void)
{
	char putchar[8] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(putchar[i]);
	}
	_putchar(10);
	return (0);
}
