/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range_stop.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 17:02:22 by mashley           #+#    #+#             */
/*   Updated: 2020/08/07 17:02:26 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/tmp.h"

int	ft_range_stop(int count, int stop)
{
	int sign;

	(void)sign;
	if (stop == 0)
		return (stop);
	if (stop < 0)
	{
		if (count == stop)
			return (-1);
		if (count < stop || count > -1)
			return (0);
		return (count - 1);
	}
	if (count == stop)
		return (1);
	if (count > stop || count < 1)
		return (0);
	return (count + 1);
}
