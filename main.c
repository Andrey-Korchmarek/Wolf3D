#include <minilibx_macos/mlx.h>
#include "wolf3d.h"

int	map[5][5] = {{1, 1, 1, 1, 1},
				{1, 0, 0, 0, 1},
				{1, 0, 0, 0, 1},
				{1, 0, 0, 0, 1},
				{1, 1, 1, 1, 1}};

int		ft_close(int keycode, t_glob *data)
{
	if (keycode == ESC)
	{
		mlx_destroy_window(data->mlx, data->win);
		exit(0);
	}
	return (0);
}

double	rangle(double alfa)
{
	if (alfa > TAU)
		return (alfa - TAU);
	if (alfa < 0)
		return (alfa + TAU);
	if (alfa == TAU)
		return (0);
	return (alfa);
}

void	img_pixel_put(t_image *data, t_pixel *pix)
{
	char	*dst;

	dst = data->addr + (pix->y * data->llh + pix->x * (data->bpp / 8));
	*(unsigned int*)dst = pix->color;
}

void	img_pixel_full(t_image *img, t_glob *data)
{
	(void)data;
	t_pixel	pix;

	pix.y = 0;
	while (pix.y < 320)
	{
		pix.x = 0;
		while (pix.x < 320)
		{
			pix.color = 0x808080;
			img_pixel_put(img, &pix);
			pix.x++;
		}
		pix.y++;
	}
}

void	set_default(t_glob *data)
{
	data->width = 1024;
	data->height = 512;
	data->map_w = 5;
	data->map_h = 5;
	data->game_w = 320;
	data->game_h = 200;

	data->mlx = mlx_init();
	data->win =\
		mlx_new_window(data->mlx, data->width, data->height, "Wolf3D");
}

int	main(void)
{
	t_coord	player;
	int		i;
	int		j;
	t_glob	*data;
	t_image	*img;
	t_map	*test;

	if (!(data = (t_glob*)ft_memalloc(sizeof(t_glob))))
		return (1);
	set_default(data);
	if (!(img = (t_image*)ft_memalloc(sizeof(t_image))))
		return (1);
	test = (t_map*)ft_memalloc(sizeof(t_map));
	test->w = data->map_w;
	test->h = data->map_h;
	test->box = (int**)malloc(sizeof(int*) * test->h);
	i = 0;
	while (i < test->h)
	{
		test->box[i] = (int*)malloc(sizeof(int) * test->w);
		j = 0;
		while (j < test->w)
		{
			test->box[i][j] = map[i][j];
			j++;
		}
		i++;
	}
	img->img = mlx_new_image(data->mlx, test->w * 64, test->h * 64);
	img->addr = mlx_get_data_addr(img->img, &img->bpp, &img->llh, &img->endian);
	img_pixel_full(img, data);
	mlx_put_image_to_window(data->mlx, data->win, img->img, 0, 0);

	free(img->img);
	img->img = NULL;
	free(img->addr);
	img->addr = NULL;

	img->img = mlx_new_image(data->mlx, data->game_w, data->game_h);
	img->addr = mlx_get_data_addr(img->img, &img->bpp, &img->llh, &img->endian);
	img_pixel_full(img, data);
	mlx_put_image_to_window(data->mlx, data->win, img->img, test->w * 64 + 1, 0);

	player = (t_coord){159, 159, rangle(TAU)};
	i = 0;
	j = 0;

	(void)player;
	(void)i;
	(void)j;

	mlx_key_hook(data->win, ft_close, data);
	mlx_loop(data->mlx);
	return (0);
}