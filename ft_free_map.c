/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidibe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 13:56:18 by isidibe-          #+#    #+#             */
/*   Updated: 2017/11/19 17:27:40 by isidibe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_free_tab(char *tab)
{
	if (tab)
	{
		free(tab);
		tab = NULL;
	}
}

void	ft_free_map(char **map)
{
	int	i;

	i = 0;
	while (map[i])
	{
		ft_free_tab(map[i]);
		i++;
	}
	free(map);
	map = NULL;
}
