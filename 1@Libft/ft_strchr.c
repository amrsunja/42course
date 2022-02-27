/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazdoev <aazdoev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 23:29:16 by aazdoev           #+#    #+#             */
/*   Updated: 2022/02/25 22:45:06 by aazdoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		if (s[i] == c)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == (char)c)
		return ((char*)(s + i));
	return (NULL);
}
