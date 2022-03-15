
// int read(int fd, char *buf, int count);
// fd - file descriptor depuis lequel lire 
// buf - buffer  de destination
// count - number of bytes to read
//
// return number of bytes readed or -1 some ussues was throw
//

// int open(char *path, int flags[, mode_t perm])
// path - file
// flags - mode: 
//		O_RDONLY O_WRONLY O_RDWR
//		O_CREAT O_TRUNC O_APPEND
//
// perm - permissions
//
// return file descriptor (int) or -1 if some ussues was throw.
//
//int close(int fd);
//fd - file descriptor
//
//return 0 or -1 if some ussues throw 

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

// gcc -D BUFFER_SIZE=4096 main_file.c
// https://github.com/520luigi/Get_Next_Line/blob/master/get_next_line.c
static int BUFFER = 5;


size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) * sizeof(*s1) + 1);
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
		str[j++] = s1[i++];
	i = 0;
	while (s2[i])
		str[j++] = s2[i++];
	//str[j] = 0;
	return (str);
}

char *readAllFile(int fd, int howMany)
{
	char result;
	char buf[BUFFER_SIZE + 1];
	char *str = "";
	int len;
	
	len = 0;
	while (result)
	{
		result = read(fd, buf, 1);
		buf[result] = '\0';
		if (buf[0] == '\n')
			break;
		str = ft_strjoin(str, buf);
		len++;
	}
	str[len] = 0;
	printf("last element: %d\n", result);
	return (str);
}

char *readFileContent(int fd, int howMany)
{
	char result;
	char buf[BUFFER_SIZE + 1];
	
	result = read(fd, buf, howMany);
	printf("resutl = %d\n", result);
	buf[result] = '\0';
	return (buf);
}

int main(void)
{
	int fd;
	char *path = "file.txt";

	fd = open(path, O_RDONLY);
	//printf("after reading content: \n%s\n", readFileContent(fd, 10));
	printf("after reading: \n%s\n", readAllFile(fd, 10));
	printf("after reading: \n%s\n", readAllFile(fd, 10));
	printf("after reading: \n%s\n", readAllFile(fd, 10));
	//printf("fd = %d", fd);
	//BUFFER += 5;
	//printf("fd = %d", BUFFER);
}
