/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 11:45:48 by mashley           #+#    #+#             */
/*   Updated: 2019/09/20 11:47:42 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memrcpy(void *dst, const void *src, size_t len)
{
	unsigned char		*buffer;
	const unsigned char	*source;
	size_t				i;

	buffer = dst;
	source = src;
	i = (len - 1);
	while (i > 0)
	{
		buffer[i] = source[i];
		i--;
	}
	buffer[0] = source[0];
	return (dst);
}
