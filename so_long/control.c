/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   control.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aergul <aergul@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:43:29 by hakanergul        #+#    #+#             */
/*   Updated: 2022/05/25 16:32:01 by aergul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	get_collect(t_data *data)
{
	int	i;
	int	j;
	int	a;

	i = 0;
	a = 0;
	while (data->map[i] != NULL)
	{
		j = 0;
		while (data->map[i][j] != '\0')
		{
			if (data->map[i][j] == 'C')
				a++;
			j++;
		}	
		i++;
	}
	if (a == 0)
	{
		ft_printf("error no collectibles");
		exit(0);
	}
	data->coin = a;
}

void	get_character(t_data *data)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	c = 0;
	while (data->map[i] != NULL)
	{
		j = 0;
		while (data->map[i][j] != '\0')
		{
			if (data->map[i][j] == 'P')
				c++;
			j++;
		}	
		i++;
	}
	if (c != 1)
	{
		ft_printf("Error\ninvalid map");
		exit(0);
	}
}

void	get_exit(t_data *data)
{
	int	i;
	int	j;
	int	e;

	i = 0;
	e = 0;
	while (data->map[i] != NULL)
	{
		j = 0;
		while (data->map[i][j] != '\0')
		{
			if (data->map[i][j] == 'E')
				e++;
			j++;
		}	
		i++;
	}
	if (e != 1)
	{
		ft_printf("Error\ninvalid map");
		exit(0);
	}
}
