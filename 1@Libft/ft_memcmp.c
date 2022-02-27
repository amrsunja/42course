/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazdoev <aazdoev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 23:28:07 by aazdoev           #+#    #+#             */
/*   Updated: 2022/02/25 19:21:03 by aazdoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;	
	char	byte1;
	char	byte2;

	if (!s1 && !s2)
		return (0);
	i = 0;
	while (i < n)
	{
		byte1 = *(unsigned char *)(s1 + i);
		byte2 = *(unsigned char *)(s2 + i);
		if (byte1 != byte2)
			return (byte1 - byte2);
		i++;
	}
	return (0);
}
