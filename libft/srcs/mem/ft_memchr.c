/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <mashley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 11:07:29 by mashley           #+#    #+#             */
/*   Updated: 2019/09/18 17:11:30 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	c_tmp;
	unsigned char	*s_tmp;
	size_t			i;

	s_tmp = (unsigned char*)str;
	c_tmp = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ft_ischar(s_tmp[i], c_tmp))
			return (s_tmp + i);
		i++;
	}
	return (NULL);
}
