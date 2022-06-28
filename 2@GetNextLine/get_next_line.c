#include "get_next_line.h"


char	*get_next_line(int fd)
{
	char	buf[BUFFER_SIZE + 1];
	int		read_bytes;
	int		i;
	char	*str;

	i = 0;
	read_bytes = read(fd, buf, 1);
	if (read_bytes == -1 || read_bytes == 0)
		return (NULL);
	str = "";//malloc(sizeof(*str) * read_bytes);
	while (read_bytes)
	{
		buf[BUFFER_SIZE] = 0;
		str = ft_strjoin(str, buf);
		if (*buf == '\n')
			break ;
		read_bytes = read(fd, buf, 1);
	}
	return (str);
}
