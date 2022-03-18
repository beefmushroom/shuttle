#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
	int		read_bytes;
	int		buf;
	char	*s;

	read_bytes = 0;
	buf = 3;
	s = (char *)malloc(sizeof(char) * 3);
	while (read_bytes != 1)
	{
		read_bytes = read(0, s, buf);
		printf("read_bytes = %d\n", read_bytes);
	}
	free(s);
	return (0);
}
