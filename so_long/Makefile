CFLAGS = -Wall -Wextra -Werror -I./minilibx -g
LFLAGS = -framework AppKit -framework OpenGL -L./minilibx -I./printf/ -I./gnl/ -lmlx
MLX = ./minilibx/libmlx.a 
LIBFT = -I./libft
GNL = $(wildcard gnl/*c)
GNLOBJS = $(GNL:.c=.o)

SRCS = main.c maps.c put_image_to_window.c take_image.c key_events.c exit.c moves.c control.c
OBJS = $(SRCS:.c=.o)
NAME = so_long

all : $(NAME)

$(NAME) : $(OBJS) $(MLX) $(GNLOBJS)
	gcc $(OBJS) $(GNLOBJS) $(LFLAGS) ./libft/libft.a ./printf/libftprintf.a ./gnl/get_next_line.a -o $(NAME)

$(MLX) :
	make -C ./minilibx
	make -C ./libft
	make -C ./gnl
	make -C ./printf
.c.o:
	$(CC)  $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS) $(NAME)

fclean:
	rm -rf $(OBJS) $(NAME)
	rm -rf ./gnl/*.o
	make clean -C ./minilibx
	make fclean -C ./libft
	make fclean -C ./printf
	make fclean -C ./gnl

re : fclean all

.PHONY: clean fclean re 

