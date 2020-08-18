/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <mashley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 10:45:43 by mashley           #+#    #+#             */
/*   Updated: 2019/09/16 12:30:26 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*part1;
	const unsigned char	*part2;

	if (!dst && !src)
		return (NULL);
	part1 = (unsigned char*)dst;
	part2 = (unsigned char*)src;
	i = 0;
	if (part2 < part1)
		while (++i <= len)
			part1[len - i] = part2[len - i];
	else
		while (len-- > 0)
			*(part1++) = *(part2++);
	return (dst);
}
