/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vertex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosamon <jrosamon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/28 16:08:25 by jrosamon          #+#    #+#             */
/*   Updated: 2015/05/11 15:14:48 by jrosamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_vertex	*new_vertex(int x, int y, int z)
{
	t_vertex *v;

	v = (t_vertex*)malloc(sizeof(t_vertex));
	v->x = x;
	v->y = y;
	v->z = z;
	return (v);
}

int			**new_map(int x, int y)
{
	int		**map;
	int		i;

	i = 0;
	map = (int **)malloc(sizeof(int *) * x);
	while (i < x)
	{
		map[i] = (int *)malloc(sizeof(int) * y);
		i++;
	}
	return (map);
}

t_vertex	get_vertex(int x, int y, int z)
{
	t_vertex v;

	v.x = x;
	v.y = y;
	v.z = z;
	return (v);
}

void		set_vertex(t_vertex *v, int x, int y, int z)
{
	v->x = x;
	v->y = y;
	v->z = z;
}
