/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aergul <aergul@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 21:34:07 by hakanergul        #+#    #+#             */
/*   Updated: 2022/05/17 23:42:13 by aergul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	moveup(t_data *data)
{
	if (data->buffer[data->player_index - data->map_width - 1] == 'C')
		data->collected_coin++;
	if (data->coin == data->collected_coin)
	{	
		if (data->buffer[data->player_index - data->map_width - 1] == 'E')
			close_win(data);
	}
	if (data->buffer[data->player_index - data->map_width - 1] != '1'
		&& data->buffer[data->player_index - data->map_width - 1] != 'E')
	{
		data->buffer[data->player_index] = '0';
		data->buffer[data->player_index - data->map_width - 1] = 'P';
		data->moves++;
		ft_printf("%d\n", data->moves);
	}
}

void	movedown(t_data *data)
{
	if (data->buffer[data->player_index + data->map_width + 1] == 'C')
		data->collected_coin++;
	if (data->coin == data->collected_coin)
	{	
		if (data->buffer[data->player_index + data->map_width + 1] == 'E')
			close_win(data);
	}
	if (data->buffer[data->player_index + data->map_width + 1] != '1'
		&& data->buffer[data->player_index + data->map_width + 1] != 'E')
	{
		data->buffer[data->player_index] = '0';
		data->buffer[data->player_index + data->map_width + 1] = 'P';
		data->moves++;
		ft_printf("%d\n", data->moves);
	}
}

void	moveleft(t_data *data)
{
	if (data->buffer[data->player_index - 1] == 'C')
		data->collected_coin++;
	if (data->coin == data->collected_coin)
	{
		if (data->buffer[data->player_index - 1] == 'E')
			close_win(data);
	}
	if (data->buffer[data->player_index - 1] != '1'
		&& data->buffer[data->player_index - 1] != 'E')
	{
		data->buffer[data->player_index] = '0';
		data->buffer[data->player_index - 1] = 'P';
		data->moves++;
		ft_printf("%d\n", data->moves);
	}
}

void	moveright(t_data *data)
{
	if (data->buffer[data->player_index + 1] == 'C')
		data->collected_coin++;
	if (data->coin == data->collected_coin)
	{
		if (data->buffer[data->player_index + 1] == 'E')
			close_win(data);
	}	
	if (data->buffer[data->player_index + 1] != '1'
		&& data->buffer[data->player_index + 1] != 'E')
	{
		data->buffer[data->player_index] = '0';
		data->buffer[data->player_index + 1] = 'P';
		data->moves++;
		ft_printf("%d\n", data->moves);
	}
}
