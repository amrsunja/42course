/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazdoev <aazdoev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 23:29:43 by aazdoev           #+#    #+#             */
/*   Updated: 2022/02/28 12:13:54 by aazdoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dstlen;
	size_t	srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	i = 0;
	j = dstlen;
	if (size > 0 && dstlen < size - 1)
	{
		while ((dstlen + i) < (size - 1) && src[i])
			dst[j++] = src[i++];
		dst[j] = 0;
	}
	if (dstlen >= size)
		dstlen = size;
	return (dstlen + srclen);
}
