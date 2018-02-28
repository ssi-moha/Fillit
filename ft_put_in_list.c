/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_in_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidibe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 17:15:40 by isidibe-          #+#    #+#             */
/*   Updated: 2018/02/19 18:24:48 by ssi-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_list		*ft_put_in_list(char *dup, char lettre, int i, int j)
{
	int		x;
	int		y;
	t_list	*list;

	y = 0;
	x = 0;
	list = (t_list*)malloc(sizeof(t_list));
	while (dup[i])
	{
		if (dup[i] == '\n')
		{
			y++;
			x = -1;
		}
		else if (dup[i] == '#')
		{
			list->tab[j++] = y;
			list->tab[j++] = x;
		}
		i++;
		x++;
	}
	list->lettre = lettre;
	list->next = NULL;
	return (list);
}
