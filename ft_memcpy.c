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

void  *ft_memcpy(void *dst, const void *src, size_t n) {
  if (!dst)
    return (NULL);
  for (size_t i = 0; i < n; i++) {
    *(char*)(dst + i) = *(char*)(src + i);
  }

  return (dst);
}
