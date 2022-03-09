/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazdoev <aazdoev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 23:30:29 by aazdoev           #+#    #+#             */
/*   Updated: 2022/02/27 16:46:29 by aazdoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	si;
	size_t	fi;

	if (!str || !find)
		return (NULL);
	if (!*find)
		return ((char *)str);
	si = 0;
	while (str[si] && si < len)
	{
		fi = 0;
		while (si + fi < len && find[fi] && str[si + fi]
			&& str[si + fi] == find[fi])
			fi++;
		if (!find[fi])
			return ((char *)(str + si));
		si++;
	}
	return (NULL);
}
