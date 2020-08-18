/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <mashley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 13:57:44 by mashley           #+#    #+#             */
/*   Updated: 2019/09/11 13:57:44 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tmp;

	if (len == 0)
		return (b);
	tmp = (unsigned char *)b;
	while (len--)
	{
		*tmp = (unsigned char)c;
		if (len)
			tmp++;
	}
	return (b);
}
