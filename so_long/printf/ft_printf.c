/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aergul <aergul@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:56:11 by aergul            #+#    #+#             */
/*   Updated: 2022/02/15 18:56:11 by aergul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_put_format(char ch, va_list ap)
{
	int	c;

	c = 0;
	if (ch == 'c')
		c += ft_putchr_fd(va_arg(ap, int), 1);
	else if (ch == 's')
		c += ft_putstnr_fd(va_arg(ap, char *), 1);
	else if (ch == 'd' || ch == 'i')
		ft_putnmbr(va_arg(ap, int), 1, &c);
	else if (ch == 'u')
		ft_put_base(va_arg(ap, unsigned int), "0123456789", 0, &c);
	else if (ch == 'x')
		ft_put_base(va_arg(ap, unsigned int), "0123456789abcdef", 1, &c);
	else if (ch == 'X')
		ft_put_base(va_arg(ap, unsigned int), "0123456789ABCDEF", 2, &c);
	else if (ch == 'p')
	{
		c += ft_putstnr_fd("0x", 1);
		ft_put_pointer(va_arg(ap, unsigned long long), &c);
	}
	else if (ch == '%')
		c += ft_putchr_fd('%', 1);
	return (c);
}

static int	ft_detect_format(const char *str, va_list argptr)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			while (str[++i] == ' ')
				;
			if (!str[i])
				return (-1);
			count += ft_put_format(str[i], argptr);
		}
		else
			count += ft_putchr_fd(str[i], 1);
		i++;
	}
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	argptr;
	int		count;

	va_start(argptr, str);
	count = 0;
	count += ft_detect_format(str, argptr);
	va_end(argptr);
	return (count);
}
