/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kohmatsu <kohmatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:27:24 by kohmatsu          #+#    #+#             */
/*   Updated: 2022/12/30 13:38:49 by kohmatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <unistd.h>
# include <limits.h>

int		ft_printf(const char *format, ...);
void	ft_putbasenbr(unsigned long long n, char *base, size_t *len);
size_t	ft_putstr(char *str, size_t len);
size_t	ft_strlen(char *s);
size_t	ft_putchar(int c);
void	ft_putadress(unsigned long long n, size_t *len);
void	ft_putnbr(long long n, size_t *len);

#endif