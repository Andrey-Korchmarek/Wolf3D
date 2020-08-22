/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wolf3d.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 06:16:02 by mashley           #+#    #+#             */
/*   Updated: 2020/08/18 06:16:10 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WOLF3D_WOLF3D_H
#define WOLF3D_WOLF3D_H
# include <stdio.h>
# include <math.h>
# include "includes/libft.h"
# define ESC 53
# define FON 0x0000ff
# define TAU (2 * M_PI)
# define PI_2 M_PI / 2
# define PI3_2 3 * M_PI / 2
# define EPS 0.0001 // epsilon
# define FOV 70

# define BLACK 0x000000
# define WHITE 0xffffff
# define RED 0xff0000
# define GREEN 0x00ff00
# define BLUE 0x42c5f5
# define WALL_CLR  0x747a78
# define FLOOR  0x5ab514

typedef int		t_bool;
# define TRUE	1
# define FALSE	0

typedef	struct	s_name
{
	int				i;
	char			c;
	float			f;
	double			d;
	void			*v;
	struct	s_name	*next;
}				t_name;

typedef	struct	s_image
{
	void		*img;
	char		*addr;
	int			bpp;
	int			llh;
	int			endian;
}				t_image;

typedef	struct	s_pixel
{
	int			x;
	int			y;
	int			color;
}				t_pixel;

typedef	struct	s_coord
{
	int		x;
	int		y;
	double	angle;
}				t_coord;

typedef	struct	s_pnt
{
	float	x;
	float	y;
}				t_pnt;

typedef	struct	s_raycasting
{
	float	dis;
	int		cardinal_point; // 1-hor; 0-ver
	t_pnt	cast_pnt;
}				t_rcasting;

typedef	struct	s_map
{
	int		w;
	int		h;
	int		**box;
}				t_map;

enum		cardinal_points
		{
	North, South, East, West
};

typedef	struct	s_glob
{
	int				width;
	int				height;
	int				map_w;
	int				map_h;
	int				game_w;
	int				game_h;
	char			c;
	float			f;
	double			d;
	void			*v;

	void		*mlx;
	void		*win;
}				t_glob;

void	draw(void);
double	rangle(double alfa);
void	set_default(t_glob *data);
void	img_pixel_put(t_image *data, t_pixel *pix);

#endif
