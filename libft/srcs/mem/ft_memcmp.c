/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <mashley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 11:07:46 by mashley           #+#    #+#             */
/*   Updated: 2019/09/16 12:30:26 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*part1;
	unsigned char	*part2;
	size_t			i;

	part1 = (unsigned char*)str1;
	part2 = (unsigned char*)str2;
	i = 0;
	while (i < n)
	{
		if (part1[i] != part2[i])
			return (part1[i] - part2[i]);
		i++;
	}
	return (0);
}
