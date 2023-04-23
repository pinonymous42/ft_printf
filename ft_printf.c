/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kohmatsu <kohmatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:28:12 by kohmatsu          #+#    #+#             */
/*   Updated: 2022/12/30 17:21:56 by kohmatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>

static size_t	check_str(char *fmt, char *str)
{
	size_t	len;

	if (str == NULL)
	{
		len = ft_putstr("(null)", 6);
		return (len);
	}
	len = ft_strlen(str);
	if (*fmt == 's')
	{
		ft_putstr(str, len);
		return (len);
	}
	return (0);
}

static void	check(int n, size_t *len)
{
	char			*base;

	base = "0123456789";
	ft_putnbr(n, len);
}

static void	ucheck(char *fmt, unsigned int n, size_t *len)
{
	if (*fmt == 'x')
		ft_putbasenbr(n, "0123456789abcdef", len);
	else if (*fmt == 'X')
		ft_putbasenbr(n, "0123456789ABCDEF", len);
	else if (*fmt == 'u')
		ft_putnbr(n, len);
}

static void	do_it(const char *fmt, va_list args, size_t *len)
{
	while (*fmt)
	{
		if (*fmt == '%')
		{
			fmt++;
			if (*fmt == 'c')
				*len += ft_putchar(va_arg(args, int));
			else if (*fmt == 's')
				*len += check_str((char *)fmt, va_arg(args, char *));
			else if (*fmt == 'd' || *fmt == 'i')
				check(va_arg(args, int), len);
			else if (*fmt == 'x' || *fmt == 'X' || *fmt == 'u')
				ucheck((char *)fmt, va_arg(args, unsigned int), len);
			else if (*fmt == 'p')
				ft_putadress(va_arg(args, unsigned long long), len);
			else if (*fmt == '%')
				*len += ft_putstr("%", 1);
		}
		else
			*len += ft_putchar(*fmt);
		fmt++;
	}
}

int	ft_printf(const char *fmt, ...)
{
	va_list	args;
	size_t	len;

	len = 0;
	va_start(args, fmt);
	if (fmt == NULL)
		return (-1);
	do_it(fmt, args, &len);
	va_end(args);
	return ((int)len);
}

// #include <stdio.h>
// // #include <limits.h>
// int main(void)
// {
// 	printf("%d\n", LONG_MAX);
// 	return (0);
// }
