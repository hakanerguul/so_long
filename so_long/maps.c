/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maps.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aergul <aergul@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 18:50:19 by aergul            #+#    #+#             */
/*   Updated: 2022/05/25 16:47:12 by aergul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	control(char *buffer, char *tmp)
{
	if (!tmp)
	{
		free(buffer);
		ft_printf("Error\nyour map is NULL\n");
		exit(1);
	}
}

void	get_map(t_data *data, char *argv2)
{
	int		fd;
	char	*tmp;
	char	*buffer;
	char	*buff;

	buff = NULL;
	fd = open(argv2, O_RDONLY);
	buffer = ft_calloc(sizeof(char), 1);
	tmp = get_next_line(fd);
	control(buffer, tmp);
	data->map_width = ft_strlen(tmp) - 1;
	while (tmp)
	{
		buff = ft_strjoin(buffer, tmp);
		free(buffer);
		free(tmp);
		buffer = buff;
		tmp = get_next_line(fd);
	}
	data->buffer = buffer;
	data->map = ft_split(buffer, '\n');
	ft_printf("%s\n", data->buffer);
	get_height(data);
}

void	get_height(t_data *data)
{
	int	i;

	i = 0;
	while (data->buffer[i])
	{
		if (data->buffer[i] == '\n' && data->buffer[i + 1] == '\n')
		{	
			ft_printf("Error\ninvalid map");
			close_win(data);
		}
			i++;
	}
	i = 0;
	while (data->map[i])
	{
		i++;
	}
	data->map_height = i;
}

int	check_line(char *str, char *base, t_data *data)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_strchr(base, str[i]))
		{	
			ft_printf("Error\ninvalid map");
			close_win(data);
		}
		i++;
	}
	return (ft_strlen(str));
}

void	check_maps(t_data *data)
{
	int	i;
	int	j;

	j = 1;
	i = check_line(data->map[0], "1", data);
	while (data->map[j])
	{
		if (i != check_line(data->map[j], "10CPE", data))
		{
			ft_printf("Error\ninvalid map");
			close_win(data);
		}
		if (data->map[j][0] != '1' || data->map[j][i - 1] != '1')
		{
			ft_printf("Error\ninvalid map");
			close_win(data);
		}
		j++;
	}
	check_line(data->map[j - 1], "1", data);
}
