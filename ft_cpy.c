/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidibe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 10:34:03 by isidibe-          #+#    #+#             */
/*   Updated: 2017/11/18 10:46:44 by isidibe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_cpy(char **map, int y, int x, t_list *list)
{
	map[y + list->tab[0]][x + list->tab[1]] = list->lettre;
	map[y + list->tab[2]][x + list->tab[3]] = list->lettre;
	map[y + list->tab[4]][x + list->tab[5]] = list->lettre;
	map[y + list->tab[6]][x + list->tab[7]] = list->lettre;
}
