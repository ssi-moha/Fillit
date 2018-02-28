/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidibe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 10:27:01 by isidibe-          #+#    #+#             */
/*   Updated: 2017/11/18 10:28:42 by isidibe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_del(char **map, int y, int x, t_list *list)
{
	map[y + list->tab[0]][x + list->tab[1]] = '.';
	map[y + list->tab[2]][x + list->tab[3]] = '.';
	map[y + list->tab[4]][x + list->tab[5]] = '.';
	map[y + list->tab[6]][x + list->tab[7]] = '.';
}
