/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   img.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosamon <jrosamon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/28 17:29:24 by jrosamon          #+#    #+#             */
/*   Updated: 2015/05/11 15:02:01 by jrosamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	fill_img(t_env *env, int color)
{
	int		i;
	int		j;

	i = 0;
	while (i < env->width)
	{
		j = 0;
		while (j < env->height)
		{
			img_put_pixel(env, i, j, color);
			j++;
		}
		i++;
	}
}

void	img_put_pixel(t_env *env, int x, int y, int color)
{
	char			*data;
	unsigned int	value;

	data = env->idata;
	value = mlx_get_color_value(env->mlx, color);
	if (x > 0 && x < env->width && y > 0 && y < env->height)
		ft_memcpy(data + y * env->isizeline + x * (env->ibits / 8), &value, 3);
}

void	img_draw(t_env *env)
{
	int		i;
	int		j;

	i = 0;
	while (i < env->mx - 1)
	{
		j = 0;
		while (j < env->my - 1)
		{
			draw_square(env,
					get_vertex(i, j, env->map[i][j]),
					get_vertex(i + 1, j, env->map[i + 1][j]),
					get_vertex(i, j + 1, env->map[i][j + 1]));
			draw_square(env,
					get_vertex(i + 1, j + 1, env->map[i + 1][j + 1]),
					get_vertex(i + 1, j, env->map[i + 1][j]),
					get_vertex(i, j + 1, env->map[i][j + 1]));
			j++;
		}
		i++;
	}
}

int		zcolor(int z)
{
	if (z <= -4)
		return (0x3D8189);
	else if (z <= -2)
		return (0x4BB5C1);
	else if (z <= 0)
		return (0x7FC6BC);
	else if (z <= 1)
		return (0xffe58a);
	else if (z <= 4)
		return (0x71A12F);
	else if (z <= 6)
		return (0x557A23);
	else if (z <= 8)
		return (0x896A45);
	else if (z <= 10)
		return (0xA98458);
	else if (z <= 12)
		return (0xCAA986);
	else
		return (0xEDF7F2);
}
