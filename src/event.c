/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   event.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosamon <jrosamon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/28 17:25:12 by jrosamon          #+#    #+#             */
/*   Updated: 2015/10/05 11:10:12 by jrosamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		draw(t_env *env)
{
	fill_img(env, 0);
	img_draw(env);
	mlx_put_image_to_window(env->mlx, env->win, env->img, 0, 0);
	return (0);
}

int		mouse(int button, int x, int y, t_env *env)
{
	(void)x;
	(void)y;
	if (button == 3)
		check_projection(env);
	draw(env);
	return (0);
}

void	check_projection(t_env *env)
{
	env->projection += 1;
	if (env->projection == 4)
		env->projection = 1;
}

int		key(int key, t_env *env)
{
	if (key == 53)
		error("User exit");
	else if (key == 125)
		env->yoff -= 20;
	else if (key == 126)
		env->yoff += 20;
	else if (key == 123)
		env->xoff -= 20;
	else if (key == 124)
		env->xoff += 20;
	else if (key == 69)
		env->c *= 1.1;
	else if (key == 78)
		env->c /= 1.1;
	else
		ft_putendl(ft_itoa(key));
	draw(env);
	return (0);
}
