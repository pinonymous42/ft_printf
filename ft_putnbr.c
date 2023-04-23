/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kohmatsu <kohmatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 10:51:55 by kohmatsu          #+#    #+#             */
/*   Updated: 2022/12/30 17:08:33 by kohmatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(long long n, size_t *len)
{
	long	tmp;
	long	s1;
	long	s2;
	int		c;

	tmp = n;
	if (tmp < 0)
	{
		write(1, "-", 1);
		tmp = -tmp;
		*len += 1;
	}
	s1 = tmp / 10;
	s2 = tmp % 10;
	if (s1 != 0)
		ft_putnbr(s1, len);
		c = s2 + '0';
	write(1, &c, 1);
	*len += 1;
}
