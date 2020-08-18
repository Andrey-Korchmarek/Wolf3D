/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <mashley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 19:02:37 by mashley           #+#    #+#             */
/*   Updated: 2019/09/16 19:35:54 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	i;
	size_t	n;

	if (!*find)
		return ((char*)str);
	i = 0;
	while (str[i] != '\0' && (size_t)i < len)
	{
		if (str[i] == find[0])
		{
			n = 1;
			while (find[n] != '\0' && str[i + n] == find[n] &&
				(size_t)(i + n) < len)
				++n;
			if (find[n] == '\0')
				return ((char*)str + i);
		}
		++i;
	}
	return (NULL);
}
