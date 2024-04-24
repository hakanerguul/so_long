/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   take_image.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aergul <aergul@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 15:57:07 by aergul            #+#    #+#             */
/*   Updated: 2022/05/25 14:39:39 by aergul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	take_image(t_data *data)
{
	int	i;

	i = 0;
	data->image = malloc(sizeof(void *) * 6);
	data->image[0] = mlx_xpm_file_to_image(data->mlx, COLL,
			&data->img_width, &data->img_height);
	data->image[1] = mlx_xpm_file_to_image(data->mlx, PLAYER,
			&data->img_width, &data->img_height);
	data->image[2] = mlx_xpm_file_to_image(data->mlx, WALL,
			&data->img_width, &data->img_height);
	data->image[3] = mlx_xpm_file_to_image(data->mlx, GROUND,
			&data->img_width, &data->img_height);
	data->image[4] = mlx_xpm_file_to_image(data->mlx, EXIT,
			&data->img_width, &data->img_height);
	data->image[5] = 0;
	while (data->image[i])
		i++;
	if (i != 5)
	{	
		ft_printf("Error\nno asset\n");
		close_win(data);
	}
}
