#include "ft_printf.h"

static void	string_parser(const char keyword, va_list *args, int *all_len);

int    ft_printf(const char *string, ...)
{
	va_list args;
	int i;
	int len;

	i = 0;
	len = 0;
	va_start(args, string);
	while (string[i])
	{
		if (string[i] == '%')
		{
			i++;
			string_parser(string[i++], &args, &len);
			//print_string(va_arg(args, char*));
			//print_char(string[i++]);
		} else {
			len += write(1, &string[i++], 1);
		}
	}
	va_end(args);
	printf("\nlen: %d\n", len);
	return 0;
}

static void	string_parser(const char keyword, va_list *args, int *all_len)
{
	char	one_char;

	if (keyword == 'c')
	{
		one_char = va_arg(args, int);
		*all_len += write(1, &one_char, 1);
	}
	else if (keyword == 's')
		print_string(va_arg(args, char*));
	else if (keyword == 'p')
		print_string("*p");
	else if (keyword == 'd')
		print_string("*d");
	else if (keyword == 'i')
		print_string("*i");
	else if (keyword == 'u')
		print_string("*u");
	else if (keyword == 'x')
		print_string("*x");
	else if (keyword == 'X')
		print_string("*X");
	else if (keyword == '%')
		*all_len += write(1, "%", 1);
}

int main(void)
{
	char *string  = "this number %c is %c ddd";
	ft_printf(string, 'u', 'n');
	//printf(string, symbol);
}

// what this https://www.google.com/search?client=safari&rls=en&q=how+to+implement+printf+in+c&ie=UTF-8&oe=UTF-8#kpvalbx=_asrAYrKnL4GCatGcjNgD20
