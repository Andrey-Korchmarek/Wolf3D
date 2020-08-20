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

typedef	struct	s_glob
{
	int				width;
	int				height;
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
