/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosamon <jrosamon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/28 16:28:16 by jrosamon          #+#    #+#             */
/*   Updated: 2015/05/11 16:24:10 by jrosamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		lst_to_map(t_list *lst, t_env *env, int x, int y)
{
	int			**map;
	t_list		*tmp;
	t_vertex	*v;
	int			i;

	i = 0;
	tmp = lst;
	map = new_map(x, y);
	while (tmp)
	{
		v = tmp->content;
		if (v->x < x && v->y < y)
			map[v->x][v->y] = v->z;
		tmp = tmp->next;
	}
	env->map = map;
	env->c = 500 / (x + y);
	env->xoff = x * env->c * 2;
	env->yoff = y * env->c;
	env->cz = 0.1;
}

void		ft_file(int fd, t_env *env)
{
	int			i;
	int			j;
	t_list		*lst;
	char		*line;
	char		**lines;

	i = 0;
	lst = NULL;
	if (fd <= 0)
		error("Error opening file");
	while (get_next_line(fd, &line))
	{
		lines = ft_strsplit(line, ' ');
		j = 0;
		while (lines[j] != NULL)
		{
			ft_lstadd(&lst, ft_lstnew(new_vertex(j, i,
							ft_atoi(lines[j])), sizeof(t_vertex)));
			j++;
		}
		i++;
	}
	env->mx = j;
	env->my = i;
	lst_to_map(lst, env, j, i);
}
