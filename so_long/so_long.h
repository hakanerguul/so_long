/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aergul <aergul@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 12:41:53 by aergul            #+#    #+#             */
/*   Updated: 2022/05/25 16:32:45 by aergul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "./minilibx/mlx.h"
# include "./printf/ft_printf.h"
# include "./gnl/get_next_line_bonus.h"
# include "./libft/libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# define GROUND "./assets/ground.xpm"
# define WALL "./assets/wall.xpm"
# define COLL "./assets/collectible.xpm"
# define EXIT "./assets/exit.xpm"
# define PLAYER "./assets/player.xpm"

typedef struct s_data
{
	void	*mlx;
	void	*mlx_win;
	int		map_width;
	int		map_height;
	char	*buffer;
	char	**map;
	int		player_index;
	char	*title;
	void	**image;
	int		img_width;
	int		img_height;
	int		loc_index;
	int		image_x;
	int		image_y;
	int		coin;
	int		collected_coin;
	int		moves;
}	t_data;

void	get_map(t_data *data, char *argv);
void	get_height(t_data *data);
void	take_image(t_data *data);
void	put_image_to_window(t_data *data);
int		key_events(int key_code, t_data *data);
void	moveup(t_data *data);
void	movedown(t_data *data);
void	moveright(t_data *data);
void	moveleft(t_data *data);
void	moveleft(t_data *data);
void	close_win(t_data *data);
int		win_events(t_data *data);
void	get_collect(t_data *data);
void	check_maps(t_data *data);
void	get_character(t_data *data);
void	get_exit(t_data *data);
void	index_ifs(t_data *data);

#endif