/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <mashley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 19:01:24 by mashley           #+#    #+#             */
/*   Updated: 2019/09/18 17:21:24 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*d_tmp;
	const char	*s_tmp;
	size_t		n;
	size_t		dlen;

	d_tmp = dst;
	s_tmp = src;
	n = size;
	while (n-- != 0 && *d_tmp != '\0')
		d_tmp++;
	dlen = d_tmp - dst;
	n = size - dlen;
	if (n == 0)
		return (dlen + ft_strlen(s_tmp));
	while (*s_tmp != '\0')
	{
		if (n != 1)
		{
			*d_tmp++ = *s_tmp;
			n--;
		}
		s_tmp++;
	}
	*d_tmp = '\0';
	return (dlen + (s_tmp - src));
}
