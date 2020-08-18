/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shrinking_gap.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <mashley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 18:58:45 by mashley           #+#    #+#             */
/*   Updated: 2019/09/16 12:30:27 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/bonus.h"

size_t	ft_shrinking_gap(size_t gap)
{
	size_t	integer;
	float	real;

	real = gap / SHRINKER;
	integer = (size_t)real;
	if (real - integer >= 0.5)
		return (integer + 1);
	else
		return (integer);
}
