/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_image_to_window.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aergul <aergul@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:08:03 by aergul            #+#    #+#             */
/*   Updated: 2022/05/10 16:24:05 by aergul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	put_image_to_window(t_data *data)
{
	data->image_x = 0;
	data->image_y = 0;
	data->loc_index = 0;
	while (data->buffer[data->loc_index])
	{
		if (data->buffer[data->loc_index])
			mlx_put_image_to_window(data->mlx, data->mlx_win, data->image[3],
				data->image_x, data->image_y);
		index_ifs(data);
		data->image_x += 64;
		if (data->buffer[data->loc_index] == '\n')
		{
			data->image_x = 0;
			data->image_y += 64;
		}
		data->loc_index++;
	}
}

void	index_ifs(t_data *data)
{
	if (data->buffer[data->loc_index] == '1')
		mlx_put_image_to_window(data->mlx, data->mlx_win, data->image[2],
			data->image_x, data->image_y);
	if (data->buffer[data->loc_index] == '0')
		mlx_put_image_to_window(data->mlx, data->mlx_win, data->image[3],
			data->image_x, data->image_y);
	if (data->buffer[data->loc_index] == 'C')
		mlx_put_image_to_window(data->mlx, data->mlx_win, data->image[0],
			data->image_x, data->image_y);
	if (data->buffer[data->loc_index] == 'E')
		mlx_put_image_to_window(data->mlx, data->mlx_win, data->image[4],
			data->image_x, data->image_y);
	if (data->buffer[data->loc_index] == 'P')
	{
		mlx_put_image_to_window(data->mlx, data->mlx_win, data->image[1],
			data->image_x, data->image_y);
				data->player_index = data->loc_index;
	}
}
