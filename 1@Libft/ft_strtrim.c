/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazdoev <aazdoev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 23:30:43 by aazdoev           #+#    #+#             */
/*   Updated: 2022/02/27 19:35:03 by aazdoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_char_in_str(char c, char const *str);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*cleaned_str;
	size_t	i;
	size_t	start_ind;
	size_t	end_ind;

	i = 0;
	start_ind = 0;
	end_ind = ft_strlen(s1);
	while (check_char_in_str(s1[start_ind], set) && s1[start_ind])
		start_ind++;
	while (check_char_in_str(s1[end_ind - 1], set) && end_ind > start_ind)
		end_ind--;
	cleaned_str = (char *)malloc(sizeof(*s1) * (end_ind - start_ind + 1));
	if (!cleaned_str)
		return (NULL);
	while (start_ind < end_ind)
		cleaned_str[i++] = s1[start_ind++];
	cleaned_str[i] = 0;
	return (cleaned_str);
}

static int	check_char_in_str(char c, char const *str)
{
	int	i;

	i = 0;
	while (str[i])
		if (str[i++] == c)
			return (1);
	return (0);
}
