#ifndef __LIBFT_H__

#define __LIBFT_H__

#include <stdlib.h>
#include <unistd.h>


int ft_isalnum(int c);

int ft_isalpha(int c);

int ft_isascii(int c);

int ft_isdigit(int c);

int ft_isprint(int c);

size_t  ft_strlen(const char *s);

//replace the first "len" bytes in buf "*b" with "c"
void  *ft_memset(void *b, int c, size_t len);                       //TODO: test

//replace the first "n" bytes in buf "*s" with "0"
void  ft_bzero(void *s, size_t n);                                  //TODO: test

void  *ft_memcpy(void *dst, const void *src, size_t n);             //TODO: test

void  *ft_memmove(void *dst, const void *src, size_t len);//http://all-ht.ru/inf/prog/c/func/memmove.html

size_t  ft_strlcpy(char *dst, const char *src, size_t size);    

size_t  ft_strlcat(char *dst, const char *src, size_t size);

int ft_toupper(int c);

int ft_tolower(int c);

char  *ft_strchr(const char *s, int c);

char  *ft_strrchr(const char *s, int c);

int ft_strncmp(const char *s1, const char *s2, size_t n);

// задача найти в массиве "s" искомый элемент "c" в диапазоне "n"
void  *ft_memchr(const void *s, int c, size_t n);

// Задача сравнивать каждый байт из массивов s1 and s2 в диапазоне n
// возвращает:
// 0 - если байты в массивах не отличаются
// на сколько байтов больше - если байт из массива1 не равен или больше байта из массива2
// на сколько байтов муньше - если байт из массива1 не равен или меньше байта из массива2
int ft_memcmp(const void *s1, const void *s2, size_t n);

char  *ft_strnstr(const char *str, const char *find, size_t len);

int ft_atoi(const char *str);

// set empty space in the memoire like malloc but all the elements replace with 0 
// "count" it is count of elements
// "size" it is the bytes for examle we can say "int": 4 bytes or "char": 1 byte
void  *ft_calloc(size_t count, size_t size);

char  *ft_strdup(const char *s1);



char  *ft_substr(char const *s, unsigned int start, size_t len);

char  *ft_strjoin(char const *s1, char const *s2);

char  *ft_strtrim(char const *s1, char const *set);

char  **ft_split(char const *s, char c);

char  *ft_itoa(int n);

char  *ft_strmapi(char const *s, char (*f)(unsigned int, char));

void  ft_striteri(char *s, void (*f)(unsigned int, char*));

void  ft_putchar_fd(char c, int fd);

void  ft_putstr_fd(char *s, int fd);

void  ft_putendl_fd(char *s, int fd);

void  ft_putnbr_fd(int n, int fd);


#endif
