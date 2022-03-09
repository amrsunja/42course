/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazdoev <aazdoev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 23:29:22 by aazdoev           #+#    #+#             */
/*   Updated: 2022/02/27 16:56:28 by aazdoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str_copy;
	size_t	i;

	if (!s1)
		return (NULL);
	i = 0;
	str_copy = (char *)malloc(ft_strlen(s1) * sizeof(*s1));
	while (s1[i])
	{
		str_copy[i] = s1[i];
		i++;
	}
	str_copy[i] = s1[i];
	return (str_copy);
}
