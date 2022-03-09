/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazdoev <aazdoev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 23:30:21 by aazdoev           #+#    #+#             */
/*   Updated: 2022/02/28 12:14:47 by aazdoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	compare_chars(char c1, char c2);

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] && s2[i])
	{
		if (compare_chars(s1[i], s2[i]))
			return (s1[i] - s2[i]);
		i++;
	}
	if (i < n)
		return (compare_chars(s1[i], s2[i]));
	return (0);
}

static int	compare_chars(char c1, char c2)
{
	if ((unsigned char) c1 != (unsigned char) c2)
		return ((unsigned char) c1 - (unsigned char) c2);
	return (0);
}
