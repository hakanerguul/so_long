/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aergul <aergul@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:14:31 by aergul            #+#    #+#             */
/*   Updated: 2022/05/09 18:51:50 by aergul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

# include <stdlib.h>
# include <unistd.h>

size_t	ft_strln(char *buf);
char	*get_next_line(int fd);
char	*get_new_line(char *buffer);
char	*first_read(int fd, char *buffer);
int		find_nl_char(char *buffer);
char	*strjoin(char *buffer, char *new_buffer);
char	*get_new_buffer(char *buffer);

#endif
