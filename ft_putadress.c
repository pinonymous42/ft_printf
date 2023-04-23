/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kohmatsu <kohmatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:21:55 by kohmatsu          #+#    #+#             */
/*   Updated: 2022/12/30 13:38:46 by kohmatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putadress(unsigned long long n, size_t *len)
{
	*len += ft_putstr("0x", 2);
	ft_putbasenbr(n, "0123456789abcdef", len);
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("%zu\n", ft_putadress(-1));
// 	return (0);
// }
