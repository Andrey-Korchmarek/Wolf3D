/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <mashley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 13:57:32 by mashley           #+#    #+#             */
/*   Updated: 2019/09/20 14:32:14 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	unsigned char		*str1;
	const unsigned char	*str2;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	str1 = (unsigned char*)dest;
	str2 = (unsigned char*)src;
	i = 0;
	while (i < len)
	{
		str1[i] = str2[i];
		i++;
	}
	return (dest);
}
