# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssi-moha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/17 23:58:17 by ssi-moha          #+#    #+#              #
#    Updated: 2017/11/19 17:34:45 by isidibe-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	fillit

CC = gcc

CFLAGS = -Wall -Wextra -Wextra

SRC =	ft_cpy.c ft_is_valide.c ft_listsplit.c ft_check_tetris.c ft_map.c\
	ft_moteur.c ft_put_in_list.c ft_valide_moteur.c ft_read_tetris.c\
	ft_del.c ft_free_map.c ft_free_list.c ft_print_tetris.c ft_min_max.c\
	ft_sqrt_map.c ft_error.c

OBJ = $(SRC:.c=.o)

all:	$(NAME)

$(NAME):
	make -C ./libft
	$(CC) -c $(CFLAGS) $(SRC)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) main.c -Llibft -lft

clean:
	rm -f $(OBJ)
	make clean -C ./libft

fclean: clean
	rm -rf $(NAME)
	make fclean -C ./libft

re: fclean all
