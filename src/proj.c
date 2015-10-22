/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosamon <jrosamon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/28 17:39:27 by jrosamon          #+#    #+#             */
/*   Updated: 2015/10/05 11:04:00 by jrosamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	to_iso(t_vertex *v1, t_env *env)
{
	t_vertex	tmp;

	tmp.x = v1->x;
	tmp.y = v1->y;
	tmp.z = v1->z;
	v1->x = tmp.x * 2 - tmp.y * 2;
	v1->y = tmp.x + tmp.y - tmp.z * env->cz;
	v1->x *= env->c;
	v1->y *= env->c;
	v1->x += env->xoff;
	v1->y += env->yoff;
}

void	to_para(t_vertex *v1, t_env *env)
{
	t_vertex	tmp;

	tmp.x = v1->x;
	tmp.y = v1->y;
	tmp.z = v1->z;
	v1->x = tmp.x * 2 * tmp.z * env->cz;
	v1->y = tmp.y * 2 * tmp.z * env->cz;
	v1->x += env->c;
	v1->y += env->c;
	v1->x += env->xoff;
	v1->y += env->yoff;
}

void	to_flat(t_vertex *v1, t_env *env)
{
	t_vertex tmp;

	tmp.x = v1->x;
	tmp.y = v1->y;
	tmp.z = v1->z;
	v1->x *= env->c;
	v1->y *= env->c;
	v1->x += env->xoff;
	v1->y += env->yoff;
}
