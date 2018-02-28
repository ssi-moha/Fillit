/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidibe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 13:35:29 by isidibe-          #+#    #+#             */
/*   Updated: 2017/11/19 17:30:43 by isidibe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	int		j;
	char	**map;
	char	*tetris;
	t_list	*list;

	if (argc != 2)
		ft_error();
	if (!(list = (t_list*)malloc(sizeof(t_list))))
		return (0);
	list->lettre = 0;
	list->next = NULL;
	tetris = ft_read_tetris(argv[1]);
	j = 2;
	if (!(ft_check_tetris(tetris)))
		ft_error();
	ft_listsplit(&list, tetris);
	map = ft_map(j++);
	while (ft_moteur(&list, map) == 0)
		map = ft_map(j++);
	ft_print_tetris(map);
	ft_free_list(list);
	ft_free_map(map);
	return (0);
}
