/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_tetris.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidibe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 13:27:49 by isidibe-          #+#    #+#             */
/*   Updated: 2017/11/19 17:21:46 by isidibe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_read_tetris(char *file_name)
{
	int		file;
	char	buf;
	char	*line;
	int		i;

	i = 0;
	line = malloc(sizeof(char*) + 550);
	file = open(file_name, O_RDONLY);
	while (read(file, &buf, 1) != 0)
		line[i++] = buf;
	close(file);
	line[i] = '\0';
	return (line);
}
