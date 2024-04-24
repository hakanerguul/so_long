/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aergul <aergul@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:31:59 by aergul            #+#    #+#             */
/*   Updated: 2022/05/25 22:50:03 by hakanergul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstnr_fd(char *s, int fd)
{
	int	i;

	if (!s)
	{
		i = ft_putstnr_fd("(null)", 1);
		return (i);
	}
	i = 0;
	while (s[i])
	{
		ft_putchr_fd(s[i], fd);
		i++;
	}
	return (i);
}
