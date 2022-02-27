/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazdoev <aazdoev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 23:28:45 by aazdoev           #+#    #+#             */
/*   Updated: 2022/02/28 00:17:40 by aazdoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putchar(char c, int fd);

void	ft_putnbr_fd(int n, int fd)
{
  if (n < 0)
  {
    write(1, "-", 1);
    ft_putnbr(-n);
  }
  else if (n > 9)
  {
    ft_putnbr(n / 10);
    ft_putnbr(n % 10);
  }
  else
    ft_putchar(n + '0', fd);
}

static void	ft_putchar(char c, int fd)
{
  write(fd, &c, 1);
}
