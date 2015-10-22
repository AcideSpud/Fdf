/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosamon <jrosamon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/03 12:33:12 by jrosamon          #+#    #+#             */
/*   Updated: 2015/08/04 16:15:29 by jrosamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "libft.h"
# include "get_next_line.h"
# include "mlx.h"
# include <stdlib.h>
# include <string.h>
# include <math.h>
# include <fcntl.h>
# include <stdio.h>
# define ESCP 65307
# define CTE 20
# define I_PX 420
# define I_PY 310

typedef struct		s_vertex
{
	int				x;
	int				y;
	double			z;
}					t_vertex;

typedef struct		s_mapl
{
	int				**map;
	size_t			content_size;
	struct s_mapl	*next;
	int				mlx;
	int				mly;
	double			mc;
	double			mxoff;
	double			myoff;
	double			mcz;
}					t_mapl;

typedef struct		s_env
{
	void			*mlx;
	void			*win;
	int				width;
	int				height;
	void			*img;
	char			*idata;
	int				ibits;
	int				isizeline;
	int				iendian;
	int				**map;
	t_mapl			*mapl;
	int				mx;
	int				my;
	double			c;
	double			xoff;
	double			yoff;
	int				projection;
	double			cz;
	double			angle;
}					t_env;

int					ft_init(t_env *env);
int					key(int key, t_env *e);
int					mouse(int button, int x, int y, t_env *env);
void				ft_file(int fd, t_env *env);
void				lst_to_map(t_list *lst, t_env *env, int x, int y);
int					**new_map(int x, int y);
void				fill_img(t_env *env, int color);
void				img_put_pixel(t_env *env, int x, int y, int color);
void				img_draw(t_env *env);
void				img_draw2(t_env *env, int **map, int x, int y);
void				img_put_hline(t_env *env, t_vertex *v1,
		t_vertex *v2, int color);
void				img_put_yline(t_env *env, t_vertex *v1,
		t_vertex *v2, int color);
void				img_put_line(t_env *env, t_vertex *v1,
		t_vertex *v2, int color);
void				draw_square(t_env *env, t_vertex v1,
		t_vertex v2, t_vertex v3);
int					zcolor(int z);
void				to_iso(t_vertex *v, t_env *e);
void				to_para(t_vertex *v, t_env *e);
void				to_flat(t_vertex *v1, t_env *env);
void				check_projection(t_env *env);
t_vertex			*new_vertex(int x, int y, int z);
t_vertex			get_vertex(int x, int y, int z);
int					draw(t_env *env);
void				error(char *str);

#endif
