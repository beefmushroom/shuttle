#include <stdio.h>

void increase_num(void)
{
	static int	num;

	printf("%d\n", num);
	num++;
}

int main(void)
{
	increase_num();
	increase_num();
	increase_num();
	return (0);
}
