/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aergul <aergul@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 18:01:36 by aergul            #+#    #+#             */
/*   Updated: 2022/05/25 16:33:10 by aergul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	t_data	*data;

	if (argc == 2)
	{
	data = ft_calloc(1, sizeof(t_data));
	data->mlx = mlx_init();
	data->title = "so_long";
		get_map(data, argv[1]);
		check_maps(data);
		get_collect(data);
		get_character(data);
		get_exit(data);
	data->mlx_win = mlx_new_window(data->mlx, data->map_width * 64,
				data->map_height * 64, data->title);
		take_image(data);
		put_image_to_window(data);
		mlx_hook(data->mlx_win, 2, 1L << 0, key_events, data);
		mlx_hook(data->mlx_win, 17, 1L << 0, win_events, data);
		mlx_loop(data->mlx);
	}
	else
		write(1, "exit", 4);
	exit(1);
}
