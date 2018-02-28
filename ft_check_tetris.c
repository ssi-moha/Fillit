/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_tetris.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssi-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 11:10:47 by ssi-moha          #+#    #+#             */
/*   Updated: 2017/11/19 17:24:55 by isidibe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_check_dot(char *tetriminos, int i)
{
	int dot;
	int sharp;

	dot = 0;
	sharp = 0;
	while (i < 21)
	{
		if (tetriminos[i] == '.')
			dot++;
		if (tetriminos[i] == '#')
			sharp++;
		i++;
	}
	if (sharp == 4 && dot == 12)
		return (1);
	else
		return (0);
}

int		ft_check_block(char *tetriminos, int i)
{
	int link;

	link = 0;
	while (i < 21)
	{
		if (tetriminos[i] == '#' && tetriminos[i - 1] == '#')
			link++;
		if (tetriminos[i] == '#' && tetriminos[i + 1] == '#')
			link++;
		if (tetriminos[i] == '#' && tetriminos[i - 5] == '#' && i > 4)
			link++;
		if (tetriminos[i] == '#' && tetriminos[i + 5] == '#' && i < 14)
			link++;
		i++;
	}
	if (link == 6 || link == 8)
		return (1);
	else
		return (0);
}

int		ft_check_tetris(char *tetriminos)
{
	int i;

	i = 0;
	if (!tetriminos || !ft_strlen(tetriminos))
		return (0);
	while (tetriminos[i])
	{
		if (ft_check_dot(tetriminos + i, 0) == 1
				&& ft_check_block(tetriminos + i, 0) == 1)
			i += 21;
		else
			return (0);
	}
	if (tetriminos[i - 1] == '\n')
		return (0);
	return (1);
}
