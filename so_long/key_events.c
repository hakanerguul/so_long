/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_events.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aergul <aergul@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 22:10:25 by hakanergul        #+#    #+#             */
/*   Updated: 2022/05/14 18:26:47 by aergul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	key_events(int key_code, t_data *data)
{
	if (key_code == 13)
		moveup(data);
	if (key_code == 1)
		movedown(data);
	if (key_code == 2)
		moveright(data);
	if (key_code == 0)
		moveleft(data);
	mlx_clear_window(data->mlx, data->mlx_win);
	put_image_to_window(data);
	if (key_code == 53)
		close_win(data);
	return (0);
}
