/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valide_moteur.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidibe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 09:29:13 by isidibe-          #+#    #+#             */
/*   Updated: 2017/11/18 10:43:41 by isidibe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_valide_moteur(char **map, int y, int x, t_list *list)
{
	int i;

	i = 0;
	while (map[i])
		i++;
	if (y + list->tab[0] >= i || x + list->tab[1] >= i
			|| y + list->tab[2] >= i || x + list->tab[3] >= i
			|| y + list->tab[4] >= i || x + list->tab[5] >= i
			|| y + list->tab[6] >= i || x + list->tab[7] >= i)
		return (0);
	else if (map[y + list->tab[0]][x + list->tab[1]] == '.'
		&& map[y + list->tab[2]][x + list->tab[3]] == '.'
		&& map[y + list->tab[4]][x + list->tab[5]] == '.'
		&& map[y + list->tab[6]][x + list->tab[7]] == '.')
		return (1);
	return (0);
}
