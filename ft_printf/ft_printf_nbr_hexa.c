/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_nbr_hexa.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazdoev <aazdoev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:39:26 by aazdoev           #+#    #+#             */
/*   Updated: 2022/08/08 11:39:27 by aazdoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int	ft_hexa_len(unsigned	int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	ft_put_hexa(unsigned int num, const char format)
{
	if (num >= 16)
	{
		ft_put_hexa(num / 16, format);
		ft_put_hexa(num % 16, format);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
		{
			if (format == 'x')
				ft_putchar_fd((num - 10 + 'a'), 1);
			if (format == 'X')
				ft_putchar_fd((num - 10 + 'A'), 1);
		}
	}
}

int	ft_print_nbr_hexa(unsigned int num, const char format)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
		ft_put_hexa(num, format);
	return (ft_hexa_len(num));
}
