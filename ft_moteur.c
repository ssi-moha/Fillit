/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moteur.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidibe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 10:41:27 by isidibe-          #+#    #+#             */
/*   Updated: 2018/02/19 18:26:44 by ssi-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_moteur(t_list **begin_lst, char **map)
{
	t_list	*list;
	int		x;
	int		y;

	y = 0;
	list = *begin_lst;
	if (list == NULL)
		return (1);
	while (map[y] != 0)
	{
		x = 0;
		while (map[y][x] != '\0')
		{
			if (ft_valide_moteur(map, y, x, list) == 1)
			{
				ft_cpy(map, y, x, list);
				if (ft_moteur(&list->next, map))
					return (1);
				ft_del(map, y, x, list);
			}
			x++;
		}
		y++;
	}
	return (0);
}
