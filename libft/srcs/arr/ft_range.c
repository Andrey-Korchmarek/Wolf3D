/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 11:43:58 by mashley           #+#    #+#             */
/*   Updated: 2019/09/06 12:34:31 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	*ft_range(int min, int max)
{
	int *run;
	int i;
	int mm;

	if (max <= min)
		return (NULL);
	run = (int*)malloc(sizeof(*run) * (max - min));
	if (!run)
		return (NULL);
	i = 0;
	mm = max - min;
	while (i < mm)
	{
		run[i] = min;
		min++;
		i++;
	}
	return (run);
}
