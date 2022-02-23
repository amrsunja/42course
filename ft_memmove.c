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

void  *ft_memmove(void *dst, const void *src, size_t len) {
  //TODO: implement
  size_t  i;
  if (!dst && !src)
    return NULL;
  i = 0;
  while (i < len) {
    *(char*)(dst+i) = *(char*)(src+i); 
    i++;
  }

  return (dst);
}
