/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aergul <aergul@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:31:17 by aergul            #+#    #+#             */
/*   Updated: 2022/02/15 18:31:17 by aergul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define UINT_MAX 4294967295
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
void	ft_put_base(unsigned int n, const char *base, int is_hexa, int *count);
void	ft_put_pointer(unsigned long long n, int *count);
int		ft_putchr_fd(char c, int fd);
void	ft_putnmbr(int n, int fd, int *count);
int		ft_putstnr_fd(char *s, int fd);

#endif
