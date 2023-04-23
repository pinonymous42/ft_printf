/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbasenbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kohmatsu <kohmatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:50:47 by kohmatsu          #+#    #+#             */
/*   Updated: 2022/12/30 13:38:45 by kohmatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putbasenbr(unsigned long long n, char *base, size_t *len)
{
	long	s1;
	long	s2;
	size_t	baselen;

	baselen = ft_strlen(base);
	s1 = n / baselen;
	s2 = n % baselen;
	if (s1 != 0)
		ft_putbasenbr(s1, base, len);
	write(1, &base[s2], 1);
	*len += 1;
}

// #include <stdio.h>
// int main(void)
// {
// 	ft_putbasenbr(0, "0123456789");
// 	return (0);
// }