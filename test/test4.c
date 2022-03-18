#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int		fd;
	char	buf[100];

	fd = open("test.txt", O_RDONLY);
	if (fd < 0)
		printf("file open error");
	else
	{
		read(fd, buf, sizeof(buf));
		printf("%s", buf);
		close(fd);
	}
	return (0);
}
