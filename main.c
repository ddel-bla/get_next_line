#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	char	*line;
	int		i;
	int		fd;
	fd = open("test.txt", O_RDONLY);
	i = 0;
	while (i < 5)
	{
		line = get_next_line(fd);
		printf("i= %i, texto= %s\n", i, line);
		free(line);
		i++;
	}
	close(fd);
	return (0);
}
