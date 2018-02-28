/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidibe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 10:30:10 by isidibe-          #+#    #+#             */
/*   Updated: 2017/11/18 17:15:49 by isidibe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_map(int n)
{
	int		i;
	int		j;
	char	**newmap;

	i = 0;
	if (!(newmap = (char**)malloc(sizeof(char*) * (n + 1))))
		return (NULL);
	while (i < n)
	{
		j = 0;
		if (!(newmap[i] = (char*)malloc(sizeof(char) * (n + 1))))
			return (NULL);
		while (j < n)
		{
			newmap[i][j] = '.';
			j++;
		}
		if (j == n)
			newmap[i][j] = '\0';
		i++;
	}
	newmap[i] = 0;
	return (newmap);
}
