/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazdoev <aazdoev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 13:46:15 by aazdoev           #+#    #+#             */
/*   Updated: 2022/02/25 12:36:49 by aazdoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_empty(char c);
static int	get_operator(char c);

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	is_negative;

	if (!str)
		return (0);
	i = 0;
	while (is_empty(str[i]))
		i++;
	is_negative = get_operator(str[i]);
	if (is_negative == -1 || str[i] == '+')
		i++;
	result = 0;
	while (ft_isdigit(str[i]))
		result = (result * 10) + (str[i++] - '0');
	return (result * is_negative);
}

static int	is_empty(char c)
{
	return (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ');
}

static int	get_operator(char c)
{
	if (c == '-')
		return (-1);
	return (1);
}
