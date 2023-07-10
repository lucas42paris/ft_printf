/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_words.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 14:46:11 by lsalin            #+#    #+#             */
/*   Updated: 2022/09/01 14:13:22 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

void	ft_putchar(int c, int *i)
{
	int	check;

	check = write(1, &c, 1);
	if (check == -1)
		*i = -1;
	else
		*i += check;
}

void	ft_putstr(char *s, int *i)
{
	int	check;

	if (!s)
	{
		check = write(1, "(null)", 6);
		if (check == -1)
			*i = -1;
		else
			*i += check;
	}
	else
	{
		check = write(1, s, ft_strlen(s));
		if (check == -1)
			*i = -1;
		else
			*i += check;
	}
}
