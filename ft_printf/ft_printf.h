/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazdoev <aazdoev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:38:51 by aazdoev           #+#    #+#             */
/*   Updated: 2022/08/08 11:46:00 by aazdoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

static int	ft_printf(const char *format, ...);
int			parse_string(const char format, va_list args);
size_t		ft_strlen(const char *str);
int			ft_print_caracter(int c);
int			ft_print_percent(void);
int			ft_print_caracter(int c);
void		ft_putstr_fd(char *s, int fd);
int			ft_print_str(char *s);
int			ft_print_hexadecimal(unsigned long long p);
size_t		ft_intlen(long int n);
char		*ft_itoa(int n);
void		ft_putchar_fd(char c, int fd);
int			ft_print_decimal(int n);
int			ft_print_nbr_hexa(unsigned int num, const char format);
void		ft_put_hexa(unsigned int num, const char format);
int			ft_hexa_len(unsigned	int num);
int			ft_num_len(unsigned	int num);
char		*ft_nitoa(unsigned int n);
int			ft_print_unsigned_decimal(unsigned int n);
int			ft_ptr_len(unsigned long num);
void		ft_put_ptr(unsigned long num);
int			ft_print_hexadecimal(unsigned long long ptr);

#endif
