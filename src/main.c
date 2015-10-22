/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosamon <jrosamon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/28 15:43:17 by jrosamon          #+#    #+#             */
/*   Updated: 2015/10/05 11:03:55 by jrosamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int			ft_init(t_env *env)
{
	env->mlx = mlx_init();
	if (env->mlx == NULL)
		return (0);
	env->width = 1000;
	env->height = 1200;
	return (1);
}

int			main(int ac, char **av)
{
	t_env	env;
	int		fd;

	if (ac == 1)
		error("Specify a file");
	while (ac != 1)
	{
		fd = open(av[ac - 1], O_RDONLY);
		ft_file(fd, &(env));
		ac--;
	}
	if (ft_init(&env) == 0)
		return (0);
	env.projection = 1;
	env.win = mlx_new_window(env.mlx, env.width, env.height, "fdf");
	env.img = mlx_new_image(env.mlx, env.width, env.height);
	env.idata = mlx_get_data_addr(env.img, &(env.ibits), &(env.isizeline),
			&(env.iendian));
	mlx_expose_hook(env.win, draw, &env);
	mlx_key_hook(env.win, key, &env);
	mlx_mouse_hook(env.win, mouse, &env);
	mlx_loop(env.mlx);
	return (0);
}

void		error(char *str)
{
	ft_putendl(str);
	exit(3);
}
