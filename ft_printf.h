/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 14:45:54 by lsalin            #+#    #+#             */
/*   Updated: 2022/09/01 13:47:43 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...) __attribute__ ((format (printf, 1, 2)));
void	ft_putchar(int c, int *i);
void	ft_hexa(unsigned int n, char *base, int *i);
void	ft_putnbr(int n, int *i);
void	ft_ptr(void *p, int *i);
void	ft_putstr(char *s, int *i);
void	ft_unsigned_putnbr(unsigned int n, int *i);

#endif
