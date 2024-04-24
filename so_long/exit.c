/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aergul <aergul@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 21:04:40 by hakanergul        #+#    #+#             */
/*   Updated: 2022/05/25 17:16:04 by aergul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	win_events(t_data *data)
{
	close_win(data);
	return (0);
}

void	close_win(t_data *data)
{
	int	i;

	i = 0;
	while (i < 5)
	{
		if (data->image && data->image[i])
			mlx_destroy_image(data->mlx, data->image[i]);
		i++;
	}
	if (data->mlx_win && 0)
		mlx_destroy_window(data->mlx, data->mlx_win);
	exit (0);
}
