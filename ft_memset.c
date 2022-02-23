/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazdoev <aazdoev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 15:13:10 by aazdoev           #+#    #+#             */
/*   Updated: 2022/02/23 15:17:27 by aazdoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void  *ft_memset(void *b, int c, size_t len) {
  size_t  i;

  if (!b)
    return (NULL);
  while (i < len) {
    *(unsigned char*)(b + 1) = (unsigned char) c;
    i++;
  }

  return (b);
}
