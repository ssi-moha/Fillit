/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidibe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 14:59:51 by isidibe-          #+#    #+#             */
/*   Updated: 2017/11/18 16:08:31 by isidibe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_free_list(t_list *begin_list)
{
	if (begin_list)
	{
		ft_free_list(begin_list->next);
		free(begin_list);
	}
}
