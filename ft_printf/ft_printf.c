/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazdoev <aazdoev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:38:46 by aazdoev           #+#    #+#             */
/*   Updated: 2022/08/08 11:40:53 by aazdoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	parse_string(const char format, va_list args)
{
	int	len;

	len = 0;
	if (format == 'c')
		len = len + ft_print_caracter(va_arg(args, int));
	else if (format == 's')
		len = len + ft_print_str(va_arg(args, char *));
	else if (format == 'p')
		len = len + ft_print_hexadecimal(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		len = len + ft_print_decimal(va_arg(args, int));
	else if (format == 'u')
		len = len + ft_print_unsigned_decimal(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		len = len + ft_print_nbr_hexa(va_arg(args, unsigned int), format);
	else if (format == '%')
		len = len + ft_print_percent();
	return (len);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	va_list	args_list;
	int		len;

	i = 0;
	len = 0;
	va_start(args_list, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			len = len + parse_string(format[i + 1], args_list);
			i++;
		}
		else
			len = len + ft_print_caracter(format[i]);
		i++;
	}
	va_end(args_list);
	return (len);
}
