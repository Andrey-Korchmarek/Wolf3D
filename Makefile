# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mashley <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/03 16:45:10 by mashley           #+#    #+#              #
#    Updated: 2020/08/03 16:45:13 by mashley          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re
NAME = fractol
CC = gcc
CFLAGS = -Werror -Wextra -Wall
FWS = -lmlx -framework OpenGL -framework AppKit

MY_LIB = ./libft/
MLX_LIB = ./minilibx_macos/
INC = ./minilibx_macos/ ./libft/includes/ ./includes
INCLUDES = -I ./minilibx_macos/ -I ./libft/includes/ -I ./includes/

SRC = $(addprefix $(SRC_DIR), $(SRC_NAME))
OBJ = $(addprefix $(OBJ_DIR)/, $(OBJ_NAME))

SRC_DIR = ./sources
OBJ_DIR = ./object

SRC_NAME = main.c burningship.c calculate.c complex.c draw.c ft_close.c game_over.c julia.c mandelbrot.c pix_to_coord.c
OBJ_NAME = $(SRC_NAME:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@make build_lib
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ) -L $(MLX_LIB) -lmlx -L $(MY_LIB) -lft $(INCLUDES) $(FWS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(INC)
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) $(INCLUDES) -o $@ -c $<

build_lib:
	@make -sC $(MY_LIB)
	@make -sC $(MLX_LIB)

clean:
	@/bin/rm -rf $(OBJ_DIR)
	@make clean -C $(MLX_LIB)
	@make clean -C $(MY_LIB)

fclean:	clean
	@make clean
	@/bin/rm -f $(NAME)
	@make fclean -C $(MY_LIB)

re:	fclean all
