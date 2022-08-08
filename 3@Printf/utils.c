#include "ft_printf.h"

void	print_char(const char c)
{
	write(1, &c, 1);
}

void	print_string(const char *str)
{
	int i;

	i = 0;
	while (str[i])
		print_char(str[i++]);
}
