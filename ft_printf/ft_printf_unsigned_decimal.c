/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned_decimal.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazdoev <aazdoev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:39:35 by aazdoev           #+#    #+#             */
/*   Updated: 2022/08/08 11:39:36 by aazdoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_num_len(unsigned	int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 10;
	}
	return (len);
}

char	*ft_nitoa(unsigned int n)
{
	char	*num;
	int		len;

	len = ft_num_len(n);
	num = (char *)malloc(sizeof(char) * (len + 1));
	if (!num)
		return (0);
	num[len] = '\0';
	while (n != 0)
	{
		num[len - 1] = n % 10 + 48;
		n = n / 10;
		len--;
	}
	return (num);
}

int	ft_print_unsigned_decimal(unsigned int n)
{
	int		len;
	char	*num;

	len = 0;
	if (n == 0)
		len = len + write(1, "0", 1);
	else
	{
		num = ft_nitoa(n);
		len = len + ft_print_str(num);
		free(num);
	}
	return (len);
}
