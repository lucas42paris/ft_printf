/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 14:46:49 by lsalin            #+#    #+#             */
/*   Updated: 2022/08/31 15:06:15 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *i)
{
	unsigned int	nb;

	if (n < 0)
	{
		ft_putchar('-', i);
		nb = n * -1;
	}
	else
		nb = n;
	if (nb > 9)
		ft_putnbr((nb / 10), i);
	ft_putchar('0' + (nb % 10), i);
}

void	ft_unsigned_putnbr(unsigned int n, int *i)
{
	if (n > 9)
		ft_unsigned_putnbr((n / 10), i);
	ft_putchar('0' + (n % 10), i);
}

void	ft_hexa(unsigned int n, char *base, int *i)
{
	if (n > 15)
		ft_hexa((n / 16), base, i);
	ft_putchar(base[(n % 16)], i);
}

void	ft_convert(unsigned long address, int *i)
{
	char	*base;

	base = "0123456789abcdef";
	if (address > 15)
		ft_convert((address / 16), i);
	ft_putchar(base[(address % 16)], i);
}

void	ft_ptr(void *p, int *i)
{
	unsigned long	address;

	if (!p)
		ft_putstr("(nil)", i);
	else
	{
		address = (unsigned long)p;
		ft_putstr("0x", i);
		ft_convert(address, i);
	}
}
