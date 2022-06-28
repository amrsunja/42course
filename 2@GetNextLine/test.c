
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
#include "get_next_line.h"

// gcc -D BUFFER_SIZE=4096 main_file.c
// https://github.com/520luigi/Get_Next_Line/blob/master/get_next_line.c

int main(void)
{
	int fd;
	char *path = "gnlTester/files/nl";//"Tests/text.txt";

	fd = open(path, O_RDONLY);

	printf("%s", get_next_line(fd));
	//close(fd);
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	//printf("%s", get_next_line(fd));
	//printf("%s", get_next_line(fd));
	//printf("%s", get_next_line(fd));
	close(fd);
}
