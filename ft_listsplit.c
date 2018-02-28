/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_listsplit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssi-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 13:30:05 by ssi-moha          #+#    #+#             */
/*   Updated: 2017/11/18 17:30:42 by isidibe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int			ft_taille(const char *s, int i)
{
	int j;
	int k;

	j = 0;
	k = 0;
	while (j < 4)
	{
		if (s[i] == '#')
			j++;
		i++;
		k++;
	}
	return (k + 1);
}

static int			ft_cwords(char const *s)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (s[i])
	{
		if (i % 20 == 0)
			j++;
		i++;
	}
	return (j);
}

static t_list		*ft_strcdup(const char *s, int i, char c)
{
	char	*dup;
	t_list	*list;
	int		n;
	int		j;
	int		k;

	j = 0;
	k = 0;
	while (s[i + 1] != '#' && s[i + 2] != '#' && s[i + 3] != '#' && s[i] != '#')
		i += 5;
	n = ft_taille(s, i);
	dup = (char*)malloc(sizeof(char) * n);
	while (k < 4)
	{
		if (ft_is_valide(s, i) == 1)
			dup[j++] = s[i];
		else if (s[i] == '#' || (s[i] == '\n' && j != 0))
			dup[j++] = s[i];
		if (s[i++] == '#')
			k++;
	}
	dup[j] = '\0';
	list = ft_put_in_list(dup, c, 0, 0);
	free(dup);
	return (list);
}

void				ft_listsplit(t_list **list, char const *s)
{
	t_list	*tmp;
	int		i;
	int		j;
	char	lettre;

	i = 1;
	j = 0;
	lettre = 'A';
	*list = ft_strcdup(s, j, lettre);
	j += 21;
	lettre++;
	i++;
	tmp = *list;
	while (i < ft_cwords(s) - 1)
	{
		tmp->next = ft_strcdup(s + j, 0, lettre);
		tmp = tmp->next;
		i++;
		lettre++;
		j += 21;
	}
}
