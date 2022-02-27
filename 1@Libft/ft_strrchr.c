/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazdoev <aazdoev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 23:30:36 by aazdoev           #+#    #+#             */
/*   Updated: 2022/02/27 16:55:48 by aazdoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	strlen;

	strlen = ft_strlen(s);
	while (strlen >= 0)
	{
		if (s[strlen] == (char)c)
			return ((char *)(s + strlen));
		strlen--;
	}
	return (NULL);
}
