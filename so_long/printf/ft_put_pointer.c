/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aergul <aergul@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:31:29 by aergul            #+#    #+#             */
/*   Updated: 2022/02/15 18:31:29 by aergul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_pointer(unsigned long long n, int *count)
{
	const char	*base;

	base = "0123456789abcdef";
	if (n < 16)
	{
		*count += ft_putchr_fd(base[n % 16], 1);
		return ;
	}
	else
		ft_put_pointer(n / 16, count);
	*count += ft_putchr_fd(base[n % 16], 1);
}
