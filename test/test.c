#include <stdio.h>

int main()
{
	char *s1;
	if (!s1)
		printf("s1 is null\n");
	else
		printf("s1 is not null\n");
	
	static char *s2;
	if (!s2)
		printf("s2 is null\n");
	else
		printf("s2 is not null\n");

}
