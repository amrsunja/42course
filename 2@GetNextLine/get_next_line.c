/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazdoev <aazdoev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 21:26:28 by aazdoev           #+#    #+#             */
/*   Updated: 2022/04/25 18:08:59 by aazdoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char		result;
	char		buf[BUFFER_SIZE + 1];
	int			i;
	char static	*str;

	i = 0;
	str = malloc(sizeof(*str));
	result = read(fd, buf, 1);
	if (result == -1 || result == 0)
		return (NULL);
	while (result)
	{
		buf[result] = '\0';
		if (*buf == '\n')
			break ;
		str[i++] = *buf;
		result = read(fd, buf, 1);
	}
	free(str);
	str[i] = '\0';
	return (str);
}
