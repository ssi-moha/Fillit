/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidibe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 10:16:06 by isidibe-          #+#    #+#             */
/*   Updated: 2018/02/19 18:21:54 by ssi-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

typedef struct		s_list
{
	int				tab[8];
	char			lettre;
	struct s_list	*next;
}					t_list;
void				ft_error(void);
int					ft_strlen(char *s);
void				ft_putnbr(int i);
int					ft_min_max(char *tetris);
int					ft_atoi(const char *s);
int					ft_is_valide(const char *s, int i);
int					ft_valide_moteur(char **map, int y, int x, t_list *list);
int					ft_moteur(t_list **begin_list, char **map);
int					ft_check_tetris(char *tetriminos);
int					ft_sqrt_map(int nb);
char				*ft_read_tetris(char *file_name);
char				**ft_map(int n);
void				ft_listsplit(t_list **list, const char *s);
void				ft_cpy(char **map, int y, int x, t_list *list);
void				ft_del(char **map, int y, int x, t_list *list);
void				ft_putendl(char const *s);
void				ft_putchar(char c);
void				ft_free_map(char **map);
void				ft_free_list(t_list *begin_list);
void				ft_print_tetris(char **map);
t_list				*ft_put_in_list(char *dup, char lettre, int i, int j);
#endif
