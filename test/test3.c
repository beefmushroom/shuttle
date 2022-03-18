#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(void)
{
	int	fd;
	
	fd = open("test.txt", O_RDONLY);
	if (fd == -1)
		return (1);
	printf("fd : %d\n", fd);
	close(fd);
	return (0);
}
