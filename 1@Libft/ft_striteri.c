/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazdoev <aazdoev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 23:29:30 by aazdoev           #+#    #+#             */
/*   Updated: 2022/02/26 08:43:33 by aazdoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		ind;
	int		strlen;

	if (!s && !f)
		return ;
	ind = 0;
	strlen = ft_strlen(s);
	while (ind <= strlen)
	{
		(*f)(ind, s);
		s++;
		ind++;
	}
}
